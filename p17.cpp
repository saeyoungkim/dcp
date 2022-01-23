#include <iostream>
#include <vector>

std::string tab_delim = "\\t";
std::string newline_delim = "\\n";

/**
 * @brief 
 * The string "dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext" represents:

dir
    subdir1
    subdir2
        file.ext
The directory dir contains an empty sub-directory subdir1 and a sub-directory subdir2 containing a file file.ext.

The string "dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext" represents:

dir
    subdir1
        file1.ext
        subsubdir1
    subdir2
        subsubdir2
            file2.ext
The directory dir contains two sub-directories subdir1 and subdir2. subdir1 contains a file file1.ext and an empty second-level sub-directory subsubdir1. subdir2 contains a second-level sub-directory subsubdir2 containing a file file2.ext.

We are interested in finding the longest (number of characters) absolute path to a file within our file system. For example, in the second example above, the longest absolute path is "dir/subdir2/subsubdir2/file2.ext", and its length is 32 (not including the double quotes).

Given a string representing the file system in the above format, return the length of the longest absolute path to a file in the abstracted file system. If there is no file in the system, return 0.
 */

bool is_file(const std::string& str) {
    return (str.find('.') != std::string::npos);
}

int getTabCountAndNormalizedPath(std::string& raw_path) {
    size_t pos;
    int ct = 0;
    while((pos = raw_path.find(tab_delim)) != std::string::npos) {
        ct++;
        raw_path.erase(0, pos + tab_delim.length());
    }

    return ct;
}

int main(void) {
    std::string paths;
    std::cin >> paths;

    paths += "\\n";

    int max_len = 0;
    std::vector<std::pair<int, std::string> > max;
    int curr_len = 0;
    std::vector<std::pair<int, std::string> > curr;

    size_t pos;

    while ((pos = paths.find(newline_delim)) != std::string::npos) {
        std::string file_path = paths.substr(0,pos);
        paths.erase(0, pos + newline_delim.length());

        int t = getTabCountAndNormalizedPath(file_path);

        if(curr.empty()) {
            curr.push_back(std::make_pair(t, file_path));
            curr_len += file_path.size();
            if(max_len < curr_len && is_file(file_path)) {
                max_len = curr_len;
                max = curr;
            }
            continue;
        }

        auto prev = curr.back();

        if(prev.first+1 < t) {
            return -1;
        }

        if(prev.first+1 > t) {
            while(curr.back().first != t-1) {
                curr_len -= curr.back().second.length();
                curr.pop_back();
            }
        }

        curr.push_back(std::make_pair(t, file_path));
        curr_len += file_path.size();
        if(max_len < curr_len && is_file(file_path)) {
            max_len = curr_len;
            max = curr;
        }
    }

    std::string ret = "";
    for(auto path : max) {
        path.second.push_back('/');
        ret += path.second;
    }

    std::cout << ret.substr(0, ret.length()-1) << std::endl;

    return 0;
}