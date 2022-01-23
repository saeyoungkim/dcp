#include <iostream>
#include <vector>
#include <unordered_set>

#define N 4
#define M 4

bool tiles[M][N] = {
    {false,false,false,false},
    {false,false,false,true},
    {false,false,false,false},
    {false,false,false,false},
};

bool is_visited[M][N] = {false};

int start_r, start_c;
int end_r, end_c;

void input() {
    std::cin >> start_r >> start_c;
    std::cin >> end_r >> end_c;
}

void solve() {
    std::vector<std::pair<int,int> > curr;
    curr.push_back(std::make_pair(start_r, start_c));
    is_visited[start_r][start_c] = true;

    int step = 0;
    while(!curr.empty()) {
        std::vector<std::pair<int, int> > next;
        for(const auto& p : curr) {
            if(p.first == end_r && p.second == end_c) {
                std::cout << step << std::endl;
                return ;
            }

            is_visited[p.first][p.second] = true;

            if(p.first != 0 && !is_visited[p.first-1][p.second] && !tiles[p.first-1][p.second]) {
                is_visited[p.first-1][p.second] = true;
                next.push_back(std::make_pair(p.first-1, p.second));
            }
            if(p.first!= M-1 && !is_visited[p.first+1][p.second] && !tiles[p.first+1][p.second]) {
                is_visited[p.first+1][p.second] = true;
                next.push_back(std::make_pair(p.first+1, p.second));
            }
            if(p.second != 0 && !is_visited[p.first][p.second-1] && !tiles[p.first][p.second-1]) {
                is_visited[p.first][p.second-1] = true;
                next.push_back(std::make_pair(p.first, p.second-1));
            }
            if(p.second!= N-1 && !is_visited[p.first][p.second+1] && !tiles[p.first][p.second+1]) {
                is_visited[p.first][p.second+1] = true;
                next.push_back(std::make_pair(p.first, p.second+1));
            }
        }

        curr = next;

        step++;
    }

    std::cout << "null" << std::endl;

    return;
}

void Solve() {
    input();
    solve();
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    Solve();
}