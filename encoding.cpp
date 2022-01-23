#include <iostream>
#include <string>
#include <stack>

std::string encoding(const std::string& str){
    std::string ret("");
    size_t start = 0;
    char c = str[start];
    size_t end = 1;
    for(; end < str.length(); ++end){
        if(c != str[end]){
            ret += std::to_string(end - start) + c;
            start = end;
            c = str[start];
        }
    }
    ret += std::to_string(end - start) + c;
    return ret;
}

int main(void) {
    std::string str = "AAAABBBCCDAA";

    std::cout << str << std::endl;
    std::cout << encoding(str) << std::endl;
}