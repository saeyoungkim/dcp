#include <list>
#include <iostream>
#include <iterator>

int find_intersect_node(std::list<int>& list1, std::list<int>& list2){
    
    std::list<int>::iterator list1_iterator = list1.begin(), list2_iterator = list2.begin();

    if(list1.size() > list2.size()){
        std::advance(list1_iterator, list1.size()-list2.size());
    } else {
        std::advance(list2_iterator, list2.size()-list1.size());
    }

    while(*list1_iterator != *list2_iterator){
        ++list1_iterator;
        ++list2_iterator;
    }

    return *list1_iterator;
}

int main(void) {
    std::list<int> list1, list2;
    list1.push_back(1);
    list1.push_back(7);
    list1.push_back(2);
    list1.push_back(-3);
    list1.push_back(11);
    list1.push_back(12);
    list1.push_back(9);

    list2.push_back(4);
    list2.push_back(-1);
    list2.push_back(11);
    list2.push_back(12);
    list2.push_back(9);
    
    std::cout << find_intersect_node(list1, list2) << std::endl;
}