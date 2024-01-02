// Implement a program that checks whether a given string is a palindrome or not.
#include <iostream>

int main() {
    std::string s;
    std::cin>>s;
    int i=0,j=s.size()-1;
    bool flag = true;
    while(i<j){
        if(s[i] != s[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if(flag) std::cout<<"Palindrome\n";
    else std::cout<<"Not Palindrome\n";
    return 0;
}
/*
  Input: "anupama"
  Output: "Not Palindrome"

  Input: "madam"
  Output: "Palindrome"
*/
