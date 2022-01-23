#include <iostream>
#include <unordered_map>

int count[26] = {0};

void solve() {
    int k;
    std::string str;
    std::cin >> k >> str;

    int st = 0;
    int ct = 0;
    std::string ret = "";
    for (int i = 0; i < str.length(); i++) {
        int idx = int(str[i] - 'a');

        if (count[idx]) {
        } else if (ct < k) {
            ct++;
        } else {
            if(str.substr(st, i - st).length() > ret.length()) {
                ret = str.substr(st, i - st);
            }

            for(int j = st; j < i; j++) {
                int st_idx = (int)(str[j]-'a');
                count[st_idx]--;
                if(!count[st_idx]) {
                    st = j+1;
                    break;
                }
            }
        }

        count[idx]++;
    }

    if(str.substr(st, str.length()-st).length() > ret.length()) {
        ret = str.substr(st, str.length() - st);
    }

    std::cout << ret << std::endl;
}

int main(void) {
    solve();
}