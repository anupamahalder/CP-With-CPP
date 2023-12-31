// Write a function to find the maximum element in an array.

#include<bits/stdc++.h>

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    int maxElement = INT_MIN;

    for(int i=0;i<n;i++){
        std::cin>>arr[i];
        if(maxElement<arr[i]) maxElement = arr[i];
    }
    std::cout<<maxElement<<std::endl;
}

/**
 * Input: 5
 *        23 4 43 5 9
 * Output: 43
 * -----------------------
 * Input: 3
 *        8 24 24
 * Output: 24
 *
*/
