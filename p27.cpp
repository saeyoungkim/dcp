#include <iostream>
#include <stack>

/**
 * @brief 
 * Good morning! Here's your coding interview problem for today.

This problem was asked by Facebook.

Given a string of round, curly, and square open and closing brackets, return whether the brackets are balanced (well-formed).

For example, given the string "([])[]({})", you should return true.

Given the string "([)]" or "((()", you should return false.
 * 
 */

std::string brackets;

void Input() {
    std::cin >> brackets;
}

bool Solve() {
    std::stack<char> s;

    for(auto bracket : brackets) {
        if (bracket == '(' | bracket == '[' | bracket == '{') {
            s.push(bracket);
        } else if(brackets.empty()) {
            return false;
        } else if(bracket == ')' && s.top() == '(') {
            s.pop();
        } else if(bracket == ']' && s.top() == '[') {
            s.pop();
        } else if(bracket == '}' && s.top() == '{') {
            s.pop();
        } else {
            return false;
        }
    }

    return s.empty();
}

void solve() {
    Input();
    std::cout << std::boolalpha << Solve() << '\n';
}

int main(void) {
    solve();
}