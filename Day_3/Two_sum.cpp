// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// Leetcode: 1 ( https://leetcode.com/problems/two-sum/description/ )
#include <iostream>
#include<vector>
#include<unordered_map>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int,int>mp;
        int first,second;
        for(int i=0;i<nums.size();i++){
            if(mp.count(target-nums[i])){
                first = mp[target-nums[i]];
                second = i;
            }
            else{
                mp[nums[i]] = i;
            }
        }
        
        return {first,second};
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
    // get the target value 
    int target;
    std::cin>>target;
    // call twoSum function 
    std::vector<int>ans;
    ans = sol.twoSum(v,target);
    // print the two index of the array 
    std::cout<<ans[0]<<" "<<ans[1]<<std::endl;
    return 0;
}

/*
=================OUPUT SECTION=================
Input: n = 4, v={1,2,3,4}, target = 6
Output: [1,3]
--------------------------------------
Input: n = 5, v={2,5,7,11}, target = 9
Output: [0,2]
--------------------------------------
*/
