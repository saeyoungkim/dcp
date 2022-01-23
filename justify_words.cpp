#include <iostream>
#include <vector>
#include <string>

void print(const std::vector<std::string>& vec){
    for(auto it : vec){
        std::cout << it << std::endl;
    }
}

std::string justify_line(const std::vector<std::string>& vec, int i, int j, int k){

    int space_number = j - i;
    int extra_space = k;
    for(int it = i; it <= j; ++it){
        extra_space -= vec[it].size();
    }

    int normal_space = space_number == 0 ? extra_space - space_number : extra_space / space_number;
    int adding_space = extra_space % space_number;

    std::string ret = vec[i];

    int idx = i+1;

    while(idx <= j){
        if(idx - i <= adding_space) ret.append(std::string(normal_space+1, ' '));
        else ret.append(std::string(normal_space, ' '));

        ret.append(vec[idx++]);
    }

    return ret;
}

std::vector<std::string> justify_words(const std::vector<std::string>& vec, int k) {
    std::vector<std::string> ret;

    int size = 0;
    int ct = 0;
    int start = 0;
    int i = 0;
    while(i < vec.size()){
        if(size <= k - vec[i].size() - ct){
            size += vec[i].size() + ct;
            ++ct;
            ++i;
        }
        else {
            ret.push_back(justify_line(vec, start, i-1, k));
            size = 0;
            ct = 0;
            start = i;
        }
    }

    ret.push_back(justify_line(vec, start, vec.size()-1, k));

    return ret;
}

int main(void){
    std::vector<std::string> vec({"the","quick"});
    int k = 16;

    std::vector<std::string> ret = justify_words(vec, k);

    print(ret);
}