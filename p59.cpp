/**
 * @file p59.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-12
 * 
 * @copyright Copyright (c) 2021
 * 
 * Implement a file syncing algorithm for two computers over a low-bandwidth network. What if we know the files in the two computers are mostly the same?
 */

/**
 * brute-force version
 * 1. computer A send the content of file to B
 * 2. computer B check the content and update 
 * 
 * 1. computer B send the content of file to A
 * 2. computer A check the content and update 
 */

/**
 * the point is low-bandwidth network.
 * -> we send the minimum data for sync file
 * -> rsync algorithm
 * -> we send deltas but how?
 */