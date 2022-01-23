#include <iostream>
#include <string>

int edit_distance(const std::string& before, const std::string& after) {

    int row_size = before.size()+1, col_size = after.size()+1;

    int** edit_distances_table = new int*[row_size];

    for(int i = 0; i < row_size; ++i){
        edit_distances_table[i] = new int[col_size];
    }

    for(int i = 0; i < row_size; ++i){
        edit_distances_table[i][0] = i;
    }

    for(int j = 0; j < col_size; ++j){
        edit_distances_table[0][j] = j;
    }

    for(int i = 1; i < row_size; ++i){
        for(int j = 1; j < col_size; ++j){
            int cost = before[i-1] == after[j-1] ? 0 : 1;
            edit_distances_table[i][j] = std::min(edit_distances_table[i-1][j-1] + cost , 
            std::min(edit_distances_table[i-1][j] + 1,
            edit_distances_table[i][j-1] + 1));
        }
    }

    return edit_distances_table[row_size-1][col_size-1];
}

int main(void) {
    std::cout << edit_distance("kitten", "sitting") << std::endl;
}