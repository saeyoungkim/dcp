#include <iostream>
#include <sstream>
#include <stack>

void solve() {
    std::stringstream ss;
    int N;
    std::cin >> N;
    int tmp;
    std::stack<int> st;
    int ct = 1;
    for(int i = 0; i < N; i++) {
        std::cin >> tmp;
        if(st.empty() || st.top() < tmp) {
            if(ct > tmp) {
                std::cout << "NO" << std::endl;
                return ;
            }
            while(ct <= tmp) {
                st.push(ct++);
                ss << "+\n";
            }
            st.pop();
            ss << "-\n";
        } else {
            while(!st.empty() && st.top() >= tmp) {
                st.pop();
                ss << "-\n";
            }
        }
    }

    std::string ret = ss.str();
    ret.pop_back();
    std::cout << ret << std::endl;

    return ;
}

int main(void) {
    solve();
}