/**
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-21
 * 
 * @copyright Copyright (c) 2022
 * 
 * Return Mininum Number of days to grade student essays

Each work day is 8 hours
Each essay takes between 1 and 7 hours to complete (inclusive)
Each essayy must be marked to completion within a day
Write a function that return the number of days to mark all essays:
int AssignmentGrader(int[] numOfEssays);
where num of Essays is 7 elements long and numOfEssays[0] is the number of 1 hour essays.

Ex. AssignmentGrader([3,1,1,3,1,0,1])
Correct, Optimal Answer: 4
Day 1: 7, 1
Day 2: 5, 3
Day 3: 4, 4
Day 4: 4, 2, 1, 1
 */

#include <iostream>

using namespace std;

int AssignmentGrader(int numOfEssays[]) {
    int ans = 0;
    for(int time = 7; time > 0; time--) {
        while(numOfEssays[time-1]) {
            numOfEssays[time-1]--;
            int curr = time;
            for(int otherTime = time; otherTime > 0;) {
                if(curr + otherTime > 8 or not numOfEssays[otherTime-1]) {
                    otherTime--;
                    continue;
                }

                curr += otherTime;
                numOfEssays[otherTime-1]--;
            }

            ans++;
        }
    }

    return ans;
}

int main() {
    int numOfEssays[7] = {3,1,1,3,1,0,1};

    cout << AssignmentGrader(numOfEssays) << endl;
}