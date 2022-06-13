class Solution {
private:
    unordered_map<int,unordered_map<int,int>> patterns = {
        {1, {{3,2}, {9,5}, {7,4}}},
        {2, {{8,5}}},
        {3, {{1,2}, {7,5}, {9,6}}},
        {4, {{6,5}}},
        {6, {{4,5}}},
        {7, {{1,4}, {3,5}, {9,8}}},
        {8, {{2,5}}},
        {9, {{1,5}, {3,6}, {7,8}}}
    };
    int M,N;
public:
    int _numberOfPatterns(vector<int>& used) {
        if(used.size() == N) return 1;
        
        int ret = used.size() >= M ? 1 : 0;
        
        for(int curr=1; curr<=9; curr++) 
        {
            bool canInsert = find(used.begin(), used.end(), curr) == used.end();
            
            if(not used.empty()) {
                int last = used.back();
                
                if(patterns[last][curr] and find(used.begin(), used.end(), patterns[last][curr]) == used.end()) canInsert = false;
            }
            
            if(canInsert) {
                used.push_back(curr);
                ret += _numberOfPatterns(used);
                used.pop_back();
            }
        }
        
        return ret;
    }
    
    int numberOfPatterns(int m, int n) {
        M = m;
        N = n;
        
        vector<int> used;
        return _numberOfPatterns(used);
    }
};