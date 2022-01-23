#include <iostream>
#include <vector>

enum class COLOR { RED, GREEN, BLUE };

void sorting_3way(std::vector<COLOR>& vec){
    int r = 0, b = vec.size();
    int idx = 0;

    while(idx < b){
        if(vec[idx] == COLOR::RED) std::swap(vec[idx++], vec[r++]);
        else if(vec[idx] == COLOR::GREEN) ++idx;
        else if(vec[idx] == COLOR::BLUE) std::swap(vec[idx], vec[--b]);
    }
}

COLOR randomColor() {
    return static_cast<COLOR>(rand() % 3);
}

std::string colorString(const COLOR& color) {
    if(color == COLOR::RED) return "RED";
    else if(color == COLOR::GREEN) return "GREEN";
    else if(color == COLOR::BLUE) return "BLUE";
    
    return "UNKNOWN";
}

std::ostream& operator<<(std::ostream& os, const std::vector<COLOR>& vec){
    for(auto it : vec){
        os << colorString(it) << " ";
    }
    return os;
}

int main(void) {
    srand(time(0));
    std::vector<COLOR> vec;
    for(int i = 0; i < 40; ++i){
        vec.push_back(randomColor());
    }

    std::cout << vec << std::endl;

    sorting_3way(vec);

    std::cout << vec << std::endl;
}