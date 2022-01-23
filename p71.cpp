#include <iostream>


int rand7() {
    return rand() % 7 + 1;
}

int rand5() {
    int p;
    while(true) {
        p = rand7();
        if(p < 6) {
            break;
        }
    }

    return p;
}

int main() {
    srand(time(NULL));

    int count[5] = {0};

    for(int i = 0; i < 1e5; i++) {
        count[rand5()-1]++;
    }

    for(int i = 0; i < 5; i++) {
        std::cout << count[i] << std::endl;
    }
}