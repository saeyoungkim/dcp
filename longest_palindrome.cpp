#include <iostream>
#include <string>

std::string get_the_longest_palindrome_from_one(int i, const std::string& str){
    int left = i-1;
    int right = i+1;
    while(left >= 0 && right < str.size()){
        if(str[left] != str[right]) break;
        --left;
        ++right;
    }

    return str.substr(left+1, right - left - 1);
}

std::string get_the_longest_palindrome_from_two(int i, int j, const std::string& str){
    int left = i;
    int right = j;
    while(left >= 0 && right < str.size()){
        if(str[left] != str[right]) break;
        --left;
        ++right;
    }

    return str.substr(left+1, right - left - 1);
}

std::string get_the_longest_palindrome(const std::string& str){
    std::string result;
    for(int i = 0; i < str.length(); ++i) {
        std::string temp = get_the_longest_palindrome_from_one(i, str);
        result = result.length() > temp.length() ? result : temp;
    }

    for(int i = 0; i < str.length(); ++i) {
        std::string temp = get_the_longest_palindrome_from_two(i-1, i, str);
        result = result.length() > temp.length() ? result : temp;
    }

    return result;
}

int main(void) {
    std::cout << get_the_longest_palindrome("aabcdcb") << std::endl;
    std::cout << get_the_longest_palindrome("bananas") << std::endl;

    return 0;
}