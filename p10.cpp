#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <functional>
#include <queue>

// void scheduler(std::function<void ()> func, int n) {
//     std::this_thread::sleep_for(std::chrono::milliseconds(n));
//     func();
// }

// void print() {
//     std::cout << "PRINT\n";
// }

auto comp = [](const std::pair<long long, std::function<void ()> >& a, const std::pair<long long, std::function<void ()> >& b) {
    return a.first > b.first;
};

std::priority_queue<
    std::pair<long long, std::function<void ()> >,
    std::vector<std::pair<long long, std::function<void ()> > >,
    decltype(comp)
> q{comp};

void print() {
    std::cout << "PRINT" << std::endl;
}

void scheduler(std::function<void ()> f, int n) {
    long long time = 
        std::chrono::duration_cast< std::chrono::milliseconds >(std::chrono::system_clock::now().time_since_epoch()).count() + n;

    q.push(std::make_pair(time, f));
}

int main(void) {
    scheduler(print, 1000);
    scheduler(print, 2000);
    scheduler(print, 3000);
    scheduler(print, 4000);
    scheduler(print, 5000);

    while(!q.empty()) {
        while(!q.empty()) {
            auto task = q.top();
            auto now = std::chrono::duration_cast< std::chrono::milliseconds >(std::chrono::system_clock::now().time_since_epoch()).count();
            if (task.first <= now) {
                q.pop();
                task.second();
            }
        }
    }
}