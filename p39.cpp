#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<pair<int,int> > live_cell_coords = {
    make_pair(0,0),
    make_pair(0,1),
    make_pair(0,2),
    make_pair(1,0),
    make_pair(1,1),
    make_pair(1,2),
    make_pair(2,0),
    make_pair(2,1),
    make_pair(2,2),
};
int step;
int N;

int count(const set<pair<int,int>>& s, const pair<int,int>& c) {
    int count = 0;

    count += s.count(make_pair(c.first-1, c.second-1));
    count += s.count(make_pair(c.first-1, c.second));
    count += s.count(make_pair(c.first-1, c.second+1));
    count += s.count(make_pair(c.first, c.second+1));
    count += s.count(make_pair(c.first+1, c.second+1));
    count += s.count(make_pair(c.first+1, c.second));
    count += s.count(make_pair(c.first+1, c.second-1));
    count += s.count(make_pair(c.first, c.second-1));

    return count;
}

void solve() {
    std::cin >> N;

    set<pair<int,int> > curr; 

    for(auto coord : live_cell_coords) {
        curr.insert(coord);
    }

    std::cin >> step;
    int i = 0;
    while(i++ <= step) {
        std::cout << "===== STEP " << i << " =====\n";
        std::cout << std::endl;
        
        for(int i = -N; i < N; i++) {
            for(int j = -N; j < N; j++) {
                std::cout << (curr.count(make_pair(i,j)) > 0 ? "." : "*");
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;
        cout << "====================\n";
        std::cout << std::endl;

        set<pair<int,int> > next;
        for(auto c : curr) {
            // process live cell
            int ct = count(curr, c);

            if(ct == 2 || ct == 3) {
                next.insert(c);
            }

            // process adjacent not live cell
            for(int row = -1; row <= 1; row++) {
                for(int col = -1; col <= 1; col++) {
                    if(!row && !col) {
                        continue;
                    }

                    pair<int,int> adj_c = make_pair(c.first+row, c.second+col);
                    if(!curr.count(adj_c)) {
                        if(count(curr, adj_c) == 3) {
                            next.insert(adj_c);
                        }
                    }
                }
            }
        }

        curr = next;
    }
}

int main(void) {
    solve();
}