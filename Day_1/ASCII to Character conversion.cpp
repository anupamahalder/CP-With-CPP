// Write a program that takes integer as input and print the character corresponding to that ASCII value. 

#include<bits/stdc++.h>

int main(){
    int ascii;
    std::cin>>ascii;

    std::cout<<char(ascii)<<std::endl;
    return 0;
}

/**
 * Input: 97
 * Output: a
 * -----------------------
 * Input: 90
 * Output: Z
 * -----------------------
 * Input: 48
 * Output: 0
*/
