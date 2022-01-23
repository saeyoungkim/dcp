#include <string>
#include <iostream>



std::string findTheLongestDistinctCharaceter(int k, const std::string& str){
    int countOfCharater[128] = {0};
    int i = 0, j = 0;
    int distinct = 0;
    std::string ret = "";
    while(j < str.length()){
        if(distinct < k){
            if(!countOfCharater[(int)str[j]]) ++distinct;
            ++countOfCharater[(int)str[j]];
            ++j;
        }
        else if(distinct == k){
            if(countOfCharater[(int)str[j]]){
                ++countOfCharater[(int)str[j]];
                ++j;                
            }
            else {
                if(ret.length() < j - i) {
                    ret = str.substr(i, j-i);
                }
                if(--countOfCharater[(int)str[i++]] == 0) --distinct;
            }
        }
    }

    std::cout << i << " " << j << std::endl;

    if(ret.length() < j - i) {
        ret = str.substr(i, j-i);
    }
    return ret;
}

int main(void){
    std::string str;
    int k;
    while(1){
        std::cout << "string : ";
        std::cin >> str;
        std::cout << "number : ";
        std::cin >> k;
        std::cout << findTheLongestDistinctCharaceter(k, str) << std::endl;
    }
}