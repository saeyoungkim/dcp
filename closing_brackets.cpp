#include <stack>
#include <iostream>
#include <string>

/**
 * Given a string of round, curly, and square open and closing brackets, return whether the brackets are balanced (well-formed).
 * For example, given the string "([])[]({})", you should return true.
 * Given the string "([)]" or "((()", you should return false.
 **/

bool is_closing_brackets(const std::string& brackets){
    std::stack<char> st;
    for(int i = 0; i < brackets.length(); ++i){
        if((brackets[i] == '{') || (brackets[i] == '(') || (brackets[i] == '[')) st.push(brackets[i]);
        else if(st.size() >= 0){
            if(brackets[i] == '}' && st.top() == '{') st.pop();
            else if(brackets[i] == ')' && st.top() == '(') st.pop();
            else if(brackets[i] == ']' && st.top() == '[') st.pop();
            else return false;
        }
        else return false;
    }

    return st.empty();
}

int main(void) {
    std::string brackets1 = "([])[]({})";
    std::string brackets2 = "([)]";
    std::string brackets3 = "((()";

    std::cout << std::boolalpha << is_closing_brackets(brackets1) << std::endl;
    std::cout << is_closing_brackets(brackets2) << std::endl;
    std::cout << is_closing_brackets(brackets3) << std::endl;
}