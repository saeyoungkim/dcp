/**
 * @file p55.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-08
 * 
 * @copyright Copyright (c) 2021
Implement a URL shortener with the following methods:

shorten(url), which shortens the url into a six-character alphanumeric string, such as zLg6wl.
restore(short), which expands the shortened string into the original url. If no such shortened string exists, return null.
Hint: What if we enter the same URL twice?
 */

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class URLShortner {
private:
    unordered_map<string,string> um1, um2;
    vector<char> chs;
    const int SIZE = 6;
public:
    URLShortner() {
        for(int i = 0; i < 26; i++) {
            chs.push_back((char)('a' + i));
            chs.push_back((char)('A' + i));
        }

        for(int i = 0; i <= 9; i++) {
            chs.push_back((char)('0' + i));
        }
    }

    string shorten(string url) {
        if(um2.count(url)) {
            return um2[url];
        }

        string shorten = "";
        for(int i = 0; i < SIZE; i++) {
            shorten += chs[rand() % chs.size()];
        }

        um1[shorten] = url;
        um2[url] = shorten;

        return shorten;
    }

    string restore(string shorten) {
        if(um1.count(shorten)) {
            return um1[shorten];
        }

        return NULL;
    }
};

int main() {
    URLShortner shortner = URLShortner();

    string shorten = shortner.shorten("https://www.google.com");
    cout << shorten << endl;
    cout << shortner.shorten("https://www.google.com") << endl;
    cout << shortner.restore(shorten) << endl;
}