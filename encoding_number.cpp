#include <iostream>
#include <stdexcept>

int countOfEncoding(std::string num){
    if(num.empty()) return 1;
    
    auto first_char_ptr = num.begin();

    if(*first_char_ptr == '0') std::runtime_error("CANNOT ENCODING");
    if(*first_char_ptr >= '3') return countOfEncoding(num.substr(1));

    auto second_char_ptr = num.begin() + 1;

    //1
    if(second_char_ptr == num.end()) return countOfEncoding(num.substr(1));
    else if(*first_char_ptr == '1'){
        if(*second_char_ptr == '0') return countOfEncoding(num.substr(2));
        return countOfEncoding(num.substr(1)) + countOfEncoding(num.substr(2));
    }
    // 2
    else{
        if(*second_char_ptr == '0' || *second_char_ptr > '6') return countOfEncoding(num.substr(2));
        else return countOfEncoding(num.substr(1)) + countOfEncoding(num.substr(2));
    }
}

int main(void) {
    std::string number;
    std::cout << "please enter the number : ";
    std::cin >> number;
    std::cout << countOfEncoding(number) << std::endl;
}