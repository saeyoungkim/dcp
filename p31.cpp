#include <iostream>
#include <vector>

/**
 * @brief 
 * This problem was asked by Google.

The edit distance between two strings refers to the minimum number of character insertions, deletions, and substitutions required to change one string to the other. For example, the edit distance between “kitten” and “sitting” is three: substitute the “k” for “s”, substitute the “e” for “i”, and append a “g”.

Given two strings, compute the edit distance between them.
 */

std::string a, b;

void Input() {
    std::cin >> a >> b;
}

void Solve() {
    if(a == "") {
        std::cout << b.length() << std::endl;
        return ;
    } else if (b == "") {
        std::cout << a.length() << std::endl;
        return ;
    }

    std::vector<int> prev_edit(a.length(), 0);
    bool has_same_ch = false;

    int count = 1;
    for(int i = 0; i < a.length(); i++) {
        if(b[0] != a[i] || has_same_ch) {
            prev_edit[i] = count++;
        } else {
            has_same_ch = true;
            prev_edit[i] = prev_edit[i-1];
        }
    }

    for(auto dist : prev_edit) {
        std::cout << dist << " ";
    }
    std::cout << std::endl;

    int r = 1;
    has_same_ch = b[0] == a[0];
    while(r < b.length()) {
        std::vector<int> curr_edit(a.length(), 0);    

        if(b[r] != a[0] || has_same_ch) {
            curr_edit[0] = prev_edit[0]+1;
        } else {
            has_same_ch = true;
            curr_edit[0] = prev_edit[0];
        }

        for(int i = 1; i < a.length(); i++) {
            curr_edit[i] = std::min( b[r] == a[i] ? prev_edit[i-1] : prev_edit[i-1]+1, std::min(prev_edit[i]+1, curr_edit[i-1]+1));
        }

        prev_edit = curr_edit;
        for(auto dist : prev_edit) {
            std::cout << dist << " ";
        }
        std::cout << std::endl;        
        r++;
    }

    std::cout << prev_edit[a.length()-1] << std::endl;
}

void solve() {
    Input();
    Solve();
}

int main(void) {
    solve();
}