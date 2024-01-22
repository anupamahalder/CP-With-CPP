// Write a program that converts a decimal number to its binary representation.

#include <iostream>
#include<algorithm>

class DecimalToBinaryConvert{ 
    public:
        //function to convert decimal to binary
        void convertToBinary(int num){
            int tmp = num;
            std::string s;
            while(tmp != 0){
                int rem = tmp%2;
                s.push_back(rem+48);
                tmp /= 2;
            }
            reverse(s.begin(),s.end());
            std::cout<<s<<std::endl;
        }
};
int main() {
    // Create object
    DecimalToBinaryConvert decimal;
    // passing different input the function to convert to binary number 
    decimal.convertToBinary(5); // 101
    decimal.convertToBinary(13); // 1101
    decimal.convertToBinary(9); // 1001
    decimal.convertToBinary(7); // 111
    return 0;
}
