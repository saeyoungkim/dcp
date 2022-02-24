/**
 * @file p132.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-24
 * 
 * @copyright Copyright (c) 2022
 * 
 * Design and implement a HitCounter class that keeps track of requests (or hits). It should support the following operations:

record(timestamp): records a hit that happened at timestamp
total(): returns the total number of hits recorded
range(lower, upper): returns the number of hits that occurred between timestamps lower and upper (inclusive)
Follow-up: What if our system has limited memory?
-> timeの粒度を荒くすればできそう
 */

#include <iostream>
#include <map>

using namespace std;

class HitCounter {
    map<int,int> counter;
    int total_count = 0;
public:
    void record(int timestamp) {
        counter[timestamp]++;
        total_count++;
    }

    int total() {
        return total_count;
    }
    
    int range(int lower, int higher) {
        int ret = 0;
        for(auto it = counter.lower_bound(lower); it != counter.upper_bound(higher); it++) {
            ret += it->second;
        }

        return ret;
    }
};

class LimitedMemHitCounter {
    const int UNIT = 3;
    map<int,int> counter;
    int total_count = 0;
public:
    void record(int timestamp) {
        counter[timestamp / UNIT]++;
        total_count++;
    }

    int total() {
        return total_count;
    }
    
    int range(int lower, int higher) {
        int ret = 0;
        int lower_unit = lower / UNIT;
        int higher_unit = higher / UNIT;
        for(auto it = counter.lower_bound(lower_unit); it != counter.upper_bound(higher_unit); it++) {
            ret += it->second;
        }

        return ret;
    }
};

int main() {
    HitCounter hc = HitCounter();
    hc.record(0);
    hc.record(5);
    hc.record(2);
    hc.record(3);
    hc.record(1);
    hc.record(10);
    hc.record(8);
    hc.record(8);

    cout << hc.total() << endl;
    cout << hc.range(8,10) << endl;

    LimitedMemHitCounter lhc = LimitedMemHitCounter();
    lhc.record(0);
    lhc.record(5);
    lhc.record(2);
    lhc.record(3);
    lhc.record(1);
    lhc.record(10);
    lhc.record(8);
    lhc.record(8);

    cout << lhc.total() << endl;
    cout << lhc.range(8,10) << endl;
}