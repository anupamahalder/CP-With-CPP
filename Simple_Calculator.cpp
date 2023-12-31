// Write a program that takes two numbers and an operator (+, -, *, /) as input and performs the corresponding operation.
#include<bits/stdc++.h>

int main(){
    while(1){
        double num1, num2;
        char op;
        std::cout<<"Enter first number: ";
        std::cin>>num1;
        std::cout<<"Enter the operation to perform";
        std::cin>>op;
        std::cout<<"Enter second number: ";
        std::cin>>num2;
        std::cout<<"The Result is: ";
        switch(op){
            case '+': 
                std::cout<<(num1+num2);
                break;
            case '-':
                std::cout<<(num1-num2);
                break;
            case '*':
                std::cout<<(num1*num2);
                break;
            case '/':
                std::cout<<(num1/num2);
                break;
            default:
                std::cout<<"Invalid input for operation!"<<std::endl;
        }
        std::cout<<std::endl;
        int flag = 0;
        std::cout<<"Enter -1 to end the program: ";
        std::cin>>flag;
        if(flag == -1) break;
    }
}
/**
    Input:  3 / 4
            0
            4 - 10
            0 
            7 * 7
            0
            2 + 3
            -1
    Output: 0.75
            -6
            49
            5

*/
