/**
 * @file p82.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-04
 * 
 * @copyright Copyright (c) 2022
 * 
 * Using a read7() method that returns 7 characters from a file, implement readN(n) which reads n characters.

For example, given a file with the content “Hello world”, three read7() returns “Hello w”, “orld” and then “”.
 */

string read7() {
    return "";
}

string readN(int n) {
    string ans = read7();

    if(n < 7) {
        return ans.substr(0, n);
    }

    return ans + readN(n-7);
}