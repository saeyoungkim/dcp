/**
 * @file p227.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-06-04
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Facebook.

Boggle is a game played on a 4 x 4 grid of letters. The goal is to find as many words as possible that can be formed by a sequence of adjacent letters in the grid, using each cell at most once. Given a game board and a dictionary of valid words, implement a Boggle solver.
 */

#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
private:
    vector<vector<int>> dirs = {{-1,0},{0,1},{1,0},{0,-1}};
    
    struct TrieNode {
        string word = "";
        unordered_map<char, TrieNode*> nexts;
        
        void insert(string str, int idx = 0) {
            if(idx == str.size()) {
                this->word = str;
                return ;
            }
            
            if(not nexts.count(str[idx])) {
                nexts[str[idx]] = new TrieNode();
            }
            
            nexts[str[idx]]->insert(str, idx+1);
        }
    };
    
    TrieNode* root = new TrieNode();
    int R;
    int C;
public:
    void backtrack(TrieNode* root, vector<string>& ans, vector<vector<char>>& board, int i, int j) {
        if(not root->word.empty())  {
            ans.push_back(root->word);
            root->word = "";
        }
        
        for(const auto& dir : dirs) {
            int ni = i + dir[0];
            int nj = j + dir[1];
            
            if(ni >= 0 and nj >= 0 and ni < R and nj < C and board[ni][nj] != '.' and root->nexts.count(board[ni][nj])){
                char ch = board[ni][nj];
                board[ni][nj] = '.';
                backtrack(root->nexts[ch], ans, board, ni, nj);
                board[ni][nj] = ch;
            }
        }
    }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        for(string word : words) {
            root->insert(word);
        }
        
        R = board.size();
        C = board.front().size();
        
        vector<string> ans;
        for(int i=0; i<R; i++) {
            for(int j=0; j<C; j++) {
                if(root->nexts.count(board[i][j])) {
                    char ch = board[i][j];
                    board[i][j] = '.';
                    backtrack(root->nexts[ch], ans, board, i, j);
                    board[i][j] = ch;
                }
            }
        }
        
        return ans;
    }
};

int main() {
    Solution solution = Solution();

    vector<vector<char>> board = {
        {'o', 'a', 'a', 'n'},
        {'e', 't', 'a', 'e'},
        {'i', 'h', 'k', 'r'},
        {'i', 'f', 'l', 'v'}
    };

    vector<string> words = {"oath","pea","eat","rain"};

    vector<string> ans = solution.findWords(board, words);

    for_each(ans.begin(), ans.end(), [](const string& str) {
        cout << str << " ";
    });
    cout << endl;
}