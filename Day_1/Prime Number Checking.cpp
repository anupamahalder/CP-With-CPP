// Implement a program to check whether a given number is prime or not.

#include<bits/stdc++.h>

int main(){
    int n;
    std::cin>>n;
    bool ans = false;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            ans = true;
            break;
        }
    }
    if(ans || n<2) std::cout<<"Not Prime Number!\n";
    else std::cout<<"Prime Number\n";
}

/**
 * Input: 17
 * Output: Prime Number
 * -----------------------
 * Input: 12
 * Output: Not Prime Number
 * -----------------------
 * Input: 0
 * Output: Not Prime Number
 * -----------------------
 * Input: 2
 * Output: Prime Number
 *
*/
