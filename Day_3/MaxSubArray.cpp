// Given an integer array nums, find the subarray with the largest sum, and return its sum.
// Leetcode: 53 (Maximum Subarray) ( https://leetcode.com/problems/maximum-subarray/description/ )

#include <iostream>
#include<vector>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int sum = 0;
        int maxSum = nums[0];
        for(int num: nums){
            // Kadane's Algorithm with time complexitu - O(N) 
            // step 1: add element to sum 
            sum += num;
            // step 2: find the maxSum 
            maxSum = std::max(maxSum, sum);
            // step 3: if sum is less than 0 then make it 0 
            if(sum < 0) sum = 0;
        }
        return maxSum;
    }
};
int main() {
    // create an object of Solution class 
    Solution sol;
    // Declare a vector of integer data type
    std::vector<int>v;
    // n is the size of the vector
    int n;
    std::cin>>n;
    // take input into vector 
    while(n--){
        int x;
        std::cin>>x;
        v.push_back(x);
    }
    int ans;
    // call maxSubArray function 
    ans = sol.maxSubArray(v);
    // print the two index of the array 
    std::cout<<ans<<std::endl;
    return 0;
}

/*
======================OUPUT SECTION===================
Input: n = 9, v = [-2,1,-3,4,-1,2,1,-5,4]
Output: ans = 6
----------------------------------------
Input: n = 5, v = [5,4,-1,7,8]
Output: ans = 23
========================================================
*/
