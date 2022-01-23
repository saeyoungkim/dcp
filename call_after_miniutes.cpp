#include <thread>
#include <chrono>
#include <ctime>
#include <iostream>

void f(){
    std::cout << "call f function" << std::endl;
}

void call_f_after_n_milli_miniutes(void (*f)(), unsigned int n){
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout << (now->tm_year + 1900) << '-' 
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday << '-'
         << now->tm_hour << '-'
         << now->tm_min << '-'
         << now->tm_sec
         << "\n";

    std::this_thread::sleep_for(std::chrono::milliseconds(n));
    f();
    
    t = std::time(0);
    now = std::localtime(&t);
    std::cout << (now->tm_year + 1900) << '-' 
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday << '-'
         << now->tm_hour << '-'
         << now->tm_min << '-'
         << now->tm_sec
         << "\n";
}

int main(void){
    call_f_after_n_milli_miniutes(&f, 5000);
}