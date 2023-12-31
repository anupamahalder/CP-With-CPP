// Implement a function that swaps the values of two variables using pointers.

#include<bits/stdc++.h>

int main(){
    int a,b;
    std::cin>>a>>b;
    std::cout<<"Before swapping a = "<<a<<", b = "<<b<<"\n";
    // assigning the memory addresses of a and b to ptr1 and ptr2
    int *ptr1 = &a;
    int *ptr2 = &b;
    //swap using pointers
    int tmp = *ptr1; 
    *ptr1 = *ptr2;
    *ptr2 = tmp;
    std::cout<<"After swapping a = "<<a<<", b = "<<b<<"\n";
}

/**
 * Input: a = 2, b = 3
 * Output: a = 3, b = 2
 * -----------------------
 * Input: a = 4, b = 5
 * Output: a = 5, b = 4
 *
*/
