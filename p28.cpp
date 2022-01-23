#include <iostream>
#include <vector>

/**
 * @brief 
 * Write an algorithm to justify text. Given a sequence of words and an integer line length k, return a list of strings which represents each line, fully justified.

More specifically, you should have as many words as possible in each line. There should be at least one space between each word. Pad extra spaces when necessary so that each line has exactly length k. Spaces should be distributed as equally as possible, with the extra spaces, if any, distributed starting from the left.

If you can only fit one word on a line, then you should pad the right-hand side with spaces.

Each word is guaranteed not to be longer than k.
 */

std::vector<std::string> arr;
int k;

void Input() {
    arr = {"the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};
    std::cin >> k;
}

std::string Justify(int s, int e) {
    int str_len = 0;

    for(int i = s; i < e; i++) {
        str_len += arr[i].length();
    }

    int diff = k - str_len;

    int i = s;
    while(diff-- > 0) {
        arr[i] += ' ';
        i++;
        if(i >= e-1) {
            i = s;
        }
    }

    std::string ret = "";

    for(int i = s; i < e && k > 0; i++) {
        ret += arr[i];
    }

    return ret;
}

void Solve() {
    int min_len = 0;

    std::vector<std::string> justified;
    int st = 0;
    for(size_t i = 0; i < arr.size(); i++) {
        if(min_len + arr[i].length() > k) {
            justified.push_back(Justify(st, i));
            st = i;
            min_len = 0;
        }

        min_len += arr[i].length() + 1;
    }

    justified.push_back(Justify(st, arr.size()));

    for(auto st : justified) {
        std::cout << st << "|" << std::endl;
    }
}

void solve() {
    Input();
    Solve();
}

int main(void) {
    solve();
}