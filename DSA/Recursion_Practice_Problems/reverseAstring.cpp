// Question: Write a recursive function to reverse a given string s.
// Function signature: reverseString(s)
// Example inputs:
// reverseString("hello") returns "olleh"
// reverseString("world") returns "dlrow"
// Constraints:
// Use recursion to solve the problem.
// Do not use loops (for, while, etc.).
// Assume s is a non-empty string.



#include<bits/stdc++.h> 
using namespace std;

string reverseAstring(string input, int end){
    if (end == 0){
        return string(1,input[0]);
    }
    string temp = reverseAstring(input,end-1);
    return input[end]+temp;
}
int main(){    
    cout<<"Enter the string"<<endl;
    string input ; 
    cin>>input;
    int start = 0 ; 
    int end = input.size()-1;
    cout<<"reversed String is :="<<reverseAstring(input,end)<<endl;
    return 0;
}