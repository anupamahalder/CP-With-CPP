// Implement a program that counts the frequency of each character in a given string.

#include <iostream>

class CharFrequencyCounter{
    
    public:
        //function to convert decimal to binary
        void freqCounter(std::string s){
            // declare an array with intializing 0 
            int freq[26] = {0};
            for(char ch: s){
                freq[ch-'a']++;
            }
            // print the characters with frequency in ascending order 
            std::cout<<"The characters of string "<<s<<std::endl;
            for(int i=0;i<26;i++){
                if(freq[i] != 0){
                    std::cout<<char(i+'a')<<"-"<<freq[i]<<std::endl;
                }
            }
            std::cout<<std::endl;
        }
};
int main() {
    // Create object
    CharFrequencyCounter myString;
    // passing different input the function to count the characters of a string
    myString.freqCounter("hello"); 
    myString.freqCounter("anupama"); 
    myString.freqCounter("hi dear"); 
    myString.freqCounter("see you"); 
    return 0;
}

/*
====================OUTPUT SECTION======================
Input: inp = "hello"
Output:
The characters of string hello
e-1
h-1
l-2
o-1
------------------------------------
Input: inp = "anupama"
Output:
The characters of string anupama
a-3
m-1
n-1
p-1
u-1
------------------------------------
Input: inp = "hi dear"
Output:
The characters of string hi dear
a-1
d-1
e-1
h-1
i-1
r-1
-----------------------------------
Input: inp = "see you"
Output:
The characters of string see you
e-2
o-1
s-1
u-1
y-1
=======================================================
*/
