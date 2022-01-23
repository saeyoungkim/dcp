#include "Dictionary.hpp"
#include <iostream>

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec){
    os << "[ ";
    for(const auto& elem: vec){
        os << elem << " ";
    }
    os << "]\n";
    return os;
}

int main(int args, char* argc[]){
    PrefixDictionary pd;
    while(1){
        std::cout << 
        "--------------------\n" <<
        "1. add the word\n" <<
        "2. find the prefix\n" <<
        "3. end\n" <<
        "--------------------\n";

        int idx;
        std::cin >> idx;
        
        switch(idx) {
            case 1: {
                std::string word;
                std::cout << "please enter the word : " ;
                std::cin >> word;
                pd.addWord(word);
                break;
            }
            case 2: {
                std::string word;
                std::cout << "please enter the word : " ;
                std::cin >> word;
                std::cout << pd.findPrefix(word);
                break;
            }
            default: {
                return 0;
            }
        }
    }
}