#include <string>
#include <iostream>

/**
 * Implement regular expression matching with the following special characters:
 * . (period) which matches any single character
 * * (asterisk) which matches zero or more of the preceding element That is, implement a function that takes in a string and a valid regular expression and returns whether or not the string matches the regular expression.
 * For example, given the regular expression "ra." and the string "ray", your function should return true. 
 * The same regular expression on the string "raymond" should return false.
 * 
 * Given the regular expression ".*at" and the string "chat", your function should return true. 
 * The same regular expression on the string "chats" should return false.
 **/

bool is_regular_expression(const std::string& regular, int regular_idx, const std::string& word, int word_idx)
{
    if( (regular_idx == regular.length()) && (word_idx == word.length()) ) return true;
    else if((regular_idx == regular.length()) || (word_idx == word.length())) return false;

    if(regular[regular_idx] != '.' && regular[regular_idx] != '*'){
        if(regular[regular_idx] == word[word_idx]) return is_regular_expression(regular, regular_idx+1, word, word_idx+1);
        else return false;
    }
    else if(regular[regular_idx] == '.') return is_regular_expression(regular, regular_idx+1, word, word_idx+1);

    // '*'
    while(regular_idx < regular.size() && regular[regular_idx]=='*'){
        ++regular_idx;
    }

    for(int idx = word_idx; idx <= word.size(); ++idx){
        if(is_regular_expression(regular, regular_idx, word, idx)) return true;
    }

    return false;
}

void print_is_regular_expression(const std::string& regular, const std::string& word){
    if(is_regular_expression(regular, 0, word, 0)) std::cout << "RIGHT REGULAR EXPRESSION" << std::endl;
    else std::cout << "WRONG REGULAR EXPRESSION" << std::endl;
}

int main(void) {
    print_is_regular_expression("ra.", "ray");
    print_is_regular_expression("ra.", "raymond");
    print_is_regular_expression("*.at", "chat");
    print_is_regular_expression("*.at", "chats");
    print_is_regular_expression("*.ats", "chats");
    print_is_regular_expression("***", "awiefjwaoiejfaowiefjad");
}