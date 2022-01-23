/**
 * @file p97.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-19
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Stripe.

Write a map implementation with a get function that lets you retrieve the value of a key at a particular time.

It should contain the following methods:

set(key, value, time): sets key to value for t = time.
get(key, time): gets the key at t = time.
The map should work like this. If we set a key at a particular time, it will maintain that value forever or until it gets set at a later time. In other words, when we get a key at a time, it should return the value that was set for that key set at the most recent time.

Consider the following examples:

d.set(1, 1, 0) # set key 1 to value 1 at time 0
d.set(1, 2, 2) # set key 1 to value 2 at time 2
d.get(1, 1) # get key 1 at time 1 should be 1
d.get(1, 3) # get key 1 at time 3 should be 2
d.set(1, 1, 5) # set key 1 to value 1 at time 5
d.get(1, 0) # get key 1 at time 0 should be null
d.get(1, 10) # get key 1 at time 10 should be 1
d.set(1, 1, 0) # set key 1 to value 1 at time 0
d.set(1, 2, 0) # set key 1 to value 2 at time 0
d.get(1, 0) # get key 1 at time 0 should be 2
 */

// bruteforce get O(N) set O(N)

// use sorted map get O(log2N) set O(log2N)

#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;

class P97 {
private:
    unordered_map<int, map<int,int>> key_time_map;
public:
    void set(int key, int value, int time) {
        key_time_map[key][time] = value;
    }

    int get(int key, int time) {
        if(key_time_map.find(key) == key_time_map.end()) {
            return INT_MIN;
        }

        map<int,int> time_map = key_time_map[key];

        auto it = time_map.upper_bound(time);

        if(it == time_map.begin()) {
            return INT_MIN;
        }

        it--;
        
        return it->second;
    }
};

int main() {
    P97 d;
    d.set(1, 1, 3); // set key 1 to value 1 at time 0
    d.set(1, 2, 6); // set key 1 to value 2 at time 2
    cout << d.get(1, 0) << endl; // get key 1 at time 1 should be null
    cout << d.get(1, 3) << endl; // get key 1 at time 1 should be 1
    cout << d.get(1, 4) << endl; // get key 1 at time 3 should be 1
    cout << d.get(1, 8) << endl; // get key 1 at time 3 should be 2
}