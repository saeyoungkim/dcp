/**
 * @file p229.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-06-05
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Flipkart.

Snakes and Ladders is a game played on a 10 x 10 board, the goal of which is get from square 1 to square 100. On each turn players will roll a six-sided die and move forward a number of spaces equal to the result. If they land on a square that represents a snake or ladder, they will be transported ahead or behind, respectively, to a new square.

Find the smallest number of turns it takes to play snakes and ladders.

For convenience, here are the squares representing snakes and ladders, and their outcomes:

snakes = {16: 6, 48: 26, 49: 11, 56: 53, 62: 19, 64: 60, 87: 24, 93: 73, 95: 75, 98: 78}
ladders = {1: 38, 4: 14, 9: 31, 21: 42, 28: 84, 36: 44, 51: 67, 71: 91, 80: 100}
 */

#include <unordered_map>
#include <queue>
#include <vector>
#include <iostream>

using namespace std;

int getMinimumTurn(unordered_map<int,int>& snakes, unordered_map<int,int>& ladders) {
    bool isVisited[101] = {false};

    queue<vector<int>> squares; // (square , step)

    squares.push({1,0});  
    
    while(not squares.empty()) {
        int square = squares.front()[0];
        int step = squares.front()[1];

        squares.pop();

        while(snakes.count(square) or ladders.count(square)) {
            if(snakes.count(square)) square = snakes[square];
            if(ladders.count(square)) square = ladders[square];
        }
        if(square == 100) return step;

        if(isVisited[square]) continue;

        isVisited[square] = true;

        for(int i=1; i<=6; i++) {
            squares.push({square+i,step+1});
        }
    }

    return -1;
}

int main() {
    unordered_map<int,int> snakes = {
        {16,6},
        {48,26},
        {49,11},
        {56,53},
        {62,19},
        {64,60},
        {87,24},
        {93,73},
        {95,75},
        {98,78}
    };

    unordered_map<int,int> ladders = {
        {1,38},
        {4,14},
        {9,31},
        {21,42},
        {28,84},
        {36,44},
        {51,67},
        {71,91},
        {80,100}
    };

    int ans = getMinimumTurn(snakes, ladders);

    cout << ans << endl;
}