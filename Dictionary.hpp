#include <list>
#include <string>
#include <vector>

class PrefixDictionary {
public:
    PrefixDictionary() : root(new Node(-1)){};
    void addWord(const std::string& str){
        Node** curr = &root;
        int idx = 0;
        while(idx < str.length()){
            int charToAscii = int(str[idx]);
            if(!(*curr)->next[charToAscii]) (*curr)->next[charToAscii] = new Node(idx);
            (*curr)->next[charToAscii]->list.push_front(str);
            ++idx;
            curr = &(*curr)->next[charToAscii];
        }
    }
    std::vector<std::string> findPrefix(const std::string& prefix){
        struct Node** curr = &root;
        int idx = 0, end = prefix.size();
        while(idx < end){
            int charToAscii = int(prefix[idx++]);
            if(!(*curr)->next[charToAscii]) return {};
            curr = &(*curr)->next[charToAscii];
        }

        return {std::begin((*curr)->list), std::end((*curr)->list)};
    }
private:
    struct Node {
        int _idx;
        Node* next[128] = {nullptr};
        std::list<std::string> list;
        Node() {}
        Node(int idx) : _idx(idx) {}
    };
    Node* root;
};