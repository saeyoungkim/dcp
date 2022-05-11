/**
 * @file count_same_when_swapped.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * Given an array with intergers nums, count the number of distinct pairs where 0 <= i < j < length of array and nums[i] == nums[j] where you're allowed to swap two positions of nums[j] to make it equal to nums[i].

Example:
[1, 23, 156, 4738, 321, 72992, 231, 651, 32]
Result = 3
 */

// unordered_set<int> seen;

/** 
 * 
 * count = 0;
 * for(i = 0; i < list.size(); i++){
 *      int v = list[i];
 *      string vstr = to_string(v);
 * 
 *      for(int j = 0; j < vstr.size(); j++) {
 *          for(int k = j+1; k < vstr.size(); k++) {
 *              swap(vstr[j], vstr[k]);
 * 
 *              if(seen.count(vstr)) count++;
 * 
 *              swap(vstr[j], vstr[k]);
 *          }
 *      }
 * }
 * 
 * return count;