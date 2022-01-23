#include <iostream>
#include <unordered_map>
#include <vector>

void _solve(const std::string& str, int idx, std::string decoded, std::vector<std::string>& vec) {
    if (str == "") {
        return ;
    } else if (idx >= str.length()) {
        vec.push_back(decoded);
        return ;
    } else if (str[idx] == '0') {
        return ;
    }

    int curr_value = str[idx] - '0';
    char curr_char = (char)(curr_value - 1 + 'a');

    if(curr_value > 2) {
        _solve(str, idx+1, decoded + curr_char, vec);
    } else if (curr_value == 2) {
        _solve(str, idx+1, decoded + curr_char, vec);
        if(idx+1 < str.length() && str[idx+1] - '0' <= 6) {
            int next_value = 20 + str[idx+1] - '0';
            char next_char = (char)(next_value - 1 + 'a');
            _solve(str, idx+2, decoded + next_char, vec);
        }
    } else if (curr_value == 1) {
        _solve(str, idx+1, decoded + curr_char, vec);
        if(idx+1 < str.length()) {
            int next_value = 10 + str[idx+1] - '0';
            char next_char = (char)(next_value - 1 + 'a');
            _solve(str, idx+2, decoded + next_char, vec);
        }
    }

    return ;
}

std::vector<std::string> solve(const std::string& str) {
    std::vector<std::string> ret;
    _solve(str, 0, "", ret);

    return ret;
}

int main(void) {
    std::string str;
    std::cin >> str;

    std::vector<std::string> ret = solve(str);

    std::cout << "message : " << str << std::endl;
    for(auto v : ret) {
        std::cout << "encoded message : " << v << std::endl;
    }
}