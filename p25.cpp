#include <iostream>

bool _solve(const std::string& str, int str_idx, const std::string& regx, int regx_idx) {
    
    if(str_idx == -1 && regx_idx == -1) {
        return true;
    } else if(regx_idx == -1) {
        return false;
    } else if(str_idx == -1 && regx[regx_idx] != '*') {
        return false;
    }

    bool ret;
    if(regx[regx_idx] == '.') {
        ret = _solve(str, --str_idx, regx, --regx_idx);
    } else if(regx[regx_idx] != '*') {
        if(str[str_idx] == regx[regx_idx]) {
            ret = _solve(str, --str_idx, regx, --regx_idx);
        } else {
            ret = false;
        }
    } else {
        char c = regx[--regx_idx];
        ret = _solve(str, str_idx, regx, regx_idx-1);
        if(ret) {
            return true;
        }

        while(str_idx >= 0 && (c == '.' || str[str_idx] == c)) {
            ret = _solve(str, --str_idx, regx, regx_idx-1);
            if(ret) {
                return true;
            }
        }
        ret = false;
    }

    return ret;
}

void solve(const std::string& str, const std::string& regx) {
    bool ret = _solve(str, str.length()-1, regx, regx.length()-1);

    std::cout << std::boolalpha << ret << std::endl;
}

int main(void) {
    std::string input;
    std::cin >> input;
    std::string regx;
    std::cin >> regx;
    solve(input, regx);
}