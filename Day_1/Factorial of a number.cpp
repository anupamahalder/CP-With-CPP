// Write a program to calculate the factorial of a given number.

#include<bits/stdc++.h>

int main(){
    int n;
    long long int res=1;
    do{
        std::cin>>n;
    }while(n<0);
    
    for(int i=2;i<=n;i++){
        res *= i;
    }
    std::cout<<res<<std::endl;
}

/**
 * Input: 6   
 * Output: 720
 * 
 * Input: 4
 * Output: 24
 * 
 * Input: 0
 * Output: 1
*/
