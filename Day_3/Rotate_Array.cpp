// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
//  Leetcode: 189 (Rotate Array) ( https://leetcode.com/problems/rotate-array/description/ )
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        // reverse two portions of the vector 
        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.begin()+(n-k),nums.end());
        // reverse whole array 
        reverse(nums.begin(),nums.end());
    }
};
int main() {
    // create an object of Solution class 
    Solution sol;
    // create a vector 
    vector<int>v = {1,2,3,4,5,6,7};
    int k = 3;
    // call rotate function 
    sol.rotate(v, k);
    // print the result array 
    for(int num: v){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}

/*
==================OUPUT SECTION===================
Input: nums = [1,2,3,4,5,6,7], k =3
Output: [5, 6, 7, 1, 2, 3, 4] 
==================================================
*/
