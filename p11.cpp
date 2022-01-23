#include <iostream>
#include <unordered_set>
#include <vector>

// 1. brute force
// M <- length of s
// N <- size of set
// time complexity of finding all possible query strings => O(MN)
// space complexity => O(1)
// it is efficient ?
// 1. if there is no value, they check all value

// 2. use map
// M <- length of s
// N <- size of set
// time coplexity of creating dictionary => O(MN)
// time complexity of finding all possible query strings => O(1)
// space complexity => O(N)
// it is efficient ?
// hash calculation time will be taken..
// plus or minus characters from s will be taken just length of s

// 3. use tree
// time coplexity of creating dictionary => O(MN)
// time complexity of finding all possible query strings => O(M)
// space complexity => O(N)

struct Node {
    std::unordered_set<int> idxs;
    Node* nodes[26] = {NULL};
};

struct Tree {
    Node* nodes[26] = {new Node()};
};

int main(void) {
    std::vector<std::string> strs = {"dog", "deer", "deal"};

    Tree t;

    Node** curr;
    for(int idx = 0; idx < strs.size(); ++idx) {
        curr = t.nodes;
        for(char c : strs[idx]) {
            int next = c - 'a';
            if(!*(curr+ next)) {
                *(curr + next) = new Node();
            }
            (*(curr + next))->idxs.insert(idx);

            curr = (*(curr + next))->nodes;
        }
    }

    std::string prefix;
    std::cin >> prefix;
    Node** curr_nodes = t.nodes;
    int i = 0;
    while(i < prefix.length()) {
        std::cout << "prefix[" << i << "] : " << prefix[i] << std::endl;
        Node* next = *(curr_nodes + prefix[i] - 'a');
        if(!next) {
            std::cout << "There are no string which has prefix of " << prefix << std::endl;
            return 0;
        }

        curr = &next;
        curr_nodes = next->nodes;
        i++;
    }

    for(auto idx : (*curr)->idxs) {
        std::cout << strs[idx] << std::endl;
    }


    return 0;
}