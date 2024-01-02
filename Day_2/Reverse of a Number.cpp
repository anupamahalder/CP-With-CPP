// Write a program that takes an integer as input and prints its reverse.

#include <iostream>

int main() {
    int n;
    std::cin>>n;
    int revNum = 0;
    while(n != 0){
        int rem = n%10;
        revNum = (revNum*10) + rem;
        n /= 10;
    }
    std::cout<<revNum;
    return 0;
}

/*
* Input: 1234
* Output: 4321
*/
