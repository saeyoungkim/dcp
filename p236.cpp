/**
 * @file p236.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-06-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * You are given a list of N points (x1, y1), (x2, y2), ..., (xN, yN) representing a polygon. You can assume these points are given in order; that is, you can construct the polygon by connecting point 1 to point 2, point 2 to point 3, and so on, finally looping around to connect point N to point 1.

Determine if a new point p lies inside this polygon. (If p is on the boundary of the polygon, you should return False).
 */

#include <vector>
#include <iostream>

using namespace std;

bool isInside(vector<vector<int>>& points, int x, int y) {
    for(vector<int>& point : points) {
        point[0] -= x;
        point[1] -= y;
    }

    int x1 = points[0][0];
    int y1 = points[0][1];
    int x2 = points[1][0];
    int y2 = points[1][1];

    int prev = x1*y2 - x2*y1;

    for(int i=1; i<points.size(); i++) {
        int x1 = points[i][0];
        int y1 = points[i][1];
        int x2 = points[(i+1) % points.size()][0];
        int y2 = points[(i+1) % points.size()][1];

        int curr = x1*y2 - x2*y1;

        if(prev*curr <= 0) return false;
        prev = curr;
    }

    return true;
}

int main() {
    vector<vector<int>> points = {{5,5}, {5,-5}, {-5,-5}, {-5,5}};

    // check all direction (xk,yk), point, (xk+1, yk+1) is same

    int x,y;
    cin >> x >> y;

    cout << boolalpha << isInside(points, x, y) << endl;
}