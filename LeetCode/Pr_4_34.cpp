// 34. Find First and Last Position of Element in Sorted Array
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int end = nums.size()-1;
        
        while(start <= end){
            int mid = (start+end)/2;
            
            if(target == nums[mid]){
                int i = mid;
                
                while(i+1 < nums.size() && nums[i+1] == target){
                    i++;
                }
                
                int sec = mid;
            
                while(sec-1 >= 0 && nums[sec-1] == target){
                    sec--;
                }
                
                return {sec, i};
            }
            else if(nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1; 
            }
        }
        
        return {-1,-1};
    }
};
