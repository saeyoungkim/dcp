#include <string>
#include <iostream>
#include <stack>

// not found -> length
int findFirstChar(const std::string& path, char c, int j){
    for(int i = j; i < path.size(); ++i){
        if(path[i] == c) return i;
    }
    return path.size();
}

bool isFile(const std::string& fileOrDirectory){
    for(const auto& c : fileOrDirectory) {
        if(c == '.') return true;
    }
    return false;
}

#define NEWLINE '\n'
#define TAB '\t'

void findTheLongestDir(std::string path,
std::stack<std::string>& recentDirs, 
int currLength,
int& maxLength){
    if(path.empty()) return ;
    
    int posOfNewLine = findFirstChar(path, NEWLINE, 0);

    std::string fileOrDirectory = path.substr(0, posOfNewLine);

    // get level
    int level = 0;
    while(fileOrDirectory.front() == TAB){
        ++level;
        fileOrDirectory = std::move(fileOrDirectory.substr(1));
    }

    while(level < recentDirs.size()){
        int dirLength = recentDirs.top().length() + 1;
        recentDirs.pop();
        currLength -= dirLength;
    }

    if(isFile(fileOrDirectory)){
        if(currLength + fileOrDirectory.length() > maxLength) maxLength = currLength + fileOrDirectory.length();
    }
    else {
        recentDirs.push(fileOrDirectory);
        currLength = currLength + fileOrDirectory.length() + 1;
        if(currLength > maxLength) maxLength = currLength;
    }

    // not found pos
    if(posOfNewLine == path.size()) path = std::move("");
    else path = std::move(path.substr(posOfNewLine+1));

    findTheLongestDir(path, recentDirs, currLength, maxLength);
}

int main(void){
    std::string path("dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2");
    std::stack<std::string> s;
    int currLength = 0, maxLength = 0;
    
    findTheLongestDir(path, s, currLength, maxLength);

    std::cout << maxLength << std::endl;
}