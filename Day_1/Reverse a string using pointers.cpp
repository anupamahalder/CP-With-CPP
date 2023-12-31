// Write a program that takes a string as input and reverses it using pointers.

#include<bits/stdc++.h>

void reverse_string(char *str){
    char *start = str;
    char *end = strlen(str) + str -1;
    while(start != end){
        char tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }
}
int main(){
    const int MAX_LENGTH = 100;
    char str[MAX_LENGTH];
    std::cin.getline(str,MAX_LENGTH);

    // before reversing the string 
    std::cout<<str<<std::endl;

    //Reverse the string
    reverse_string(str);
    
    //after reverse the string
    std::cout<<str<<std::endl;
    return 0;
}

/**
 * Input: anupama
 * Output: amapuna
 * -----------------------
 * Input: madam
 * Output: madam
 * -----------------------
 * Input: sky
 * Output: yks
*/
