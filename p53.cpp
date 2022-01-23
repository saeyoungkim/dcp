/**
 * @file p53.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-06
 * 
 * @copyright Copyright (c) 2021
Implement a queue using two stacks. Recall that a queue is a FIFO (first-in, first-out) data structure with the following methods: enqueue, which inserts an element into the queue, and dequeue, which removes it.
 */

#include <iostream>
#include <stack>

class Queue {
    std::stack<int> in_stk;
    std::stack<int> out_stk;

public:
    void enqueue(int v) {
        in_stk.push(v);
    }

    int dequeue() {
        if (out_stk.empty() && in_stk.empty()) {
            std::exit(1);
        } else if (out_stk.empty() && !in_stk.empty()){
            while(!in_stk.empty()) {
                out_stk.push(in_stk.top());
                in_stk.pop();
            }
        }

        int res = out_stk.top();
        out_stk.pop();

        return res;
    }
};

int main(void) {
    Queue q = Queue();
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
    q.enqueue(2);
    q.enqueue(1);
    q.enqueue(0);
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;

    return 0;
}