#include <unordered_map>
#include <string>
#include <iostream>
#include <list>
#include <vector>

bool find_original_sentence(std::unordered_map<std::string, int>& umap, std::string str, std::list<std::string>& list){
    if(str == "") return true;

    for(size_t size = str.size(); size > 0; --size){
        std::string partial_front = str.substr(0, size);
        if(umap[partial_front] > 0){
            --umap[partial_front];
            bool find = find_original_sentence(umap, size == str.size() ? "" : str.substr(size), list);

            if(find) {
                list.push_front(partial_front);
                return true;
            }
            ++umap[partial_front];
        }
    } 

    return false;
}

int main(void) {
    std::unordered_map<std::string,int> umap;
    std::vector<std::string> dict({"quick", "brown", "the", "fox"});

    std::string str = "thequickbrownfox";

    std::unordered_map<std::string,int> umap2;
    std::vector<std::string> dict2({"bed", "bath", "bedbath", "and", "beyond"});

    std::string str2 = "bedbathandbeyond";

    for(const auto& it : dict){
        ++umap[it];
    }

    std::list<std::string> list;
    
    bool is_find = find_original_sentence(umap, str, list);

    if(is_find){
        for(const auto& it: list){
            std::cout << it << " ";
        }
    }
    std::cout << std::endl;

    for(const auto& it : dict2){
        ++umap2[it];
    }

    std::list<std::string> list2;
    
    bool is_find2 = find_original_sentence(umap2, str2, list2);

    if(is_find2){
        for(const auto& it: list2){
            std::cout << it << " ";
        }
    }
    std::cout << std::endl;
}