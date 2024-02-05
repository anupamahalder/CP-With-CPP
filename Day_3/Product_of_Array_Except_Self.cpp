// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix_prod(nums.size(),1);
        vector<int>suffix_prod(nums.size(),1);
        // create prefix array 
        for(int i=1;i<nums.size();i++){
            int prod = prefix_prod[i-1]*nums[i-1];
            prefix_prod[i] = prod;
        }
        // create suffix array 
        for(int i=nums.size()-2;i>=0;i--){
            int prod = suffix_prod[i+1]*nums[i+1];
            suffix_prod[i] = prod;
        }
        // make our result array 
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(prefix_prod[i]*suffix_prod[i]);
        }
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int>v={1,2,3,4};
    // call productExceptSelf 
    vector<int>ans;
    ans = sol.productExceptSelf(v);
    // print the result vector 
    for(int num:ans){
        cout<<num<<" ";
    }
    return 0;
}
