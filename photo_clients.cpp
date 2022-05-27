/**
 * @file photo_clients.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-25
 * 
 * @copyright Copyright (c) 2022
 * 
 * Problem statement:
Suppose you are working on Google Photos. you are wring the client application. Request comes to you to upload N photos. you fire the request to server to upload those N photos to server. Then the server responds back with acknowledgements that a particular photo is uploaded.
Example. Suppose you are uploading 10 Photos, The server can respond back in any order, such as 1,2,4,5,3,7,6,10,9,8 . Now at any given point of time we need to check what is the maximum photo number which has been uploaded continously.
Example.

ack(1),
getMax()-> returns 1, because the maximum photo uploaded is 1
ack(2),
getMax()-> returns 2, because the maximum photo uploaded is 2
ack(4)
getMax()-> returns 2 only because 3 has not been recieved yet
ack(5)
getMax()-> returns 2 again because 3 has not been recieved yet
ack(3)
getMax()-> returns 5 because we recieved 3 and 4 and 5 also we recieved eralier. using this example you have to complete the following class
 */

#include <iostream>
#include <map>

using namespace std;

class PhotoClients {
private:
    map<int,int> ranges;
    int maxElem = 0;
public:
    void ack(int n) {
        auto prev = ranges.lower_bound(n);
        int left = n;
        int right = n;
        if(prev != ranges.begin()) {
            --prev;

            if(prev->second == n-1) {
                left = min(n, prev->first);
                ranges.erase(prev);
            }
        }

        auto next = ranges.upper_bound(n);
        if(next != ranges.end()) {
            if(next->first == n+1) {
                right = max(n, next->second);
                ranges.erase(next);
            }
        }

        ranges[left] = right;
        if(left == 1) maxElem = right;
    }

    int getMax() {
        return maxElem;
    }
};

int main() {
    PhotoClients pc = PhotoClients();

    pc.ack(1);
    cout << pc.getMax() << endl;
    pc.ack(2);
    cout << pc.getMax() << endl;
    pc.ack(4);
    cout << pc.getMax() << endl;
    pc.ack(5);
    cout << pc.getMax() << endl;
    pc.ack(3);
    cout << pc.getMax() << endl;
}