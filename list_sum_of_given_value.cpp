#include <list>
#include <set>
#include <iostream>

bool isRightSum(std::list<int>* list, int sum) {
    std::list<int>& list_ref = *list;
    std::set<int> s;
    
    for(auto it = list_ref.begin(); it != list_ref.end(); ++it) {
        if(s.find(*it) != s.end()) return true;
        s.insert(sum - *it);
    }

    return false;
}

int main(void) {
    std::list<int> list;
    list.push_back(10);
    list.push_back(15);
    list.push_back(3);
    list.push_back(7);

    std::cout << std::boolalpha << isRightSum(&list , 17) << std::endl;
}