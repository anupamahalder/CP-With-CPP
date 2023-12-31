// Implement a program that takes a student's score as input and prints their grade (A, B, C, etc.).
#include<bits/stdc++.h>

int main(){
    double marks;
    do{
        std::cin>>marks;
    }while(marks<0 || marks>100); //Loop will continue if marks is less than 0 or greater than 100
    if(marks>=80 && marks<=100) std::cout<<"A";
    else if(marks>=60 && marks<80) std::cout<<"B";
    else if(marks>=40 && marks<60) std::cout<<"C";
    else std::cout<<"D";
}

/**
 * Input: 
 *      -33
        557
        608
        100
    
 *  Output:
        A
*/
