// Write a function to calculate the sum of elements in an array.

#include<bits/stdc++.h>

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    long long res = 0;
    for(int i=0;i<n;i++){
        res += arr[i];
    }
    std::cout<<res<<std::endl;
}

/**
 * Input: 4
 *        1 2 3 4
 *    
 * Output: 10
 * 
 * -----------------------
 * 
 * Input: 5
 *        12 32 43 5 2
 *        
 * Output: 94
 *
*/
