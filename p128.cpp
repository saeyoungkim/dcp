/**
 * @file p128.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-20
 * 
 * @copyright Copyright (c) 2022
 * 
 * The Tower of Hanoi is a puzzle game with three rods and n disks, each a different size.

All the disks start off on the first rod in a stack. They are ordered by size, with the largest disk on the bottom and the smallest one at the top.

The goal of this puzzle is to move all the disks from the first rod to the last rod while following these rules:

You can only move one disk at a time.
A move consists of taking the uppermost disk from one of the stacks and placing it on top of another stack.
You cannot place a larger disk on top of a smaller disk.
Write a function that prints out all the steps necessary to complete the Tower of Hanoi. You should assume that the rods are numbered, with the first rod being 1, the second (auxiliary) rod being 2, and the last (goal) rod being 3.

For example, with n = 3, we can do this in 7 moves:

Move 1 to 3
Move 1 to 2
Move 3 to 2
Move 1 to 3
Move 2 to 1
Move 2 to 3
Move 1 to 3
 */

#include <iostream>

using namespace std;

void Hanoi(int n, int source, int aux, int goal) {
    if(n == 1) {
        cout << "Move " << source << " to " << goal << endl;
        return ;
    }

    Hanoi(n-1, source, goal, aux);
    cout << "Move " << source << " to " << goal << endl;
    Hanoi(n-1, aux, source, goal);
}

int main() {
    int n;
    cin >> n;
    Hanoi(n, 1, 2, 3);
}