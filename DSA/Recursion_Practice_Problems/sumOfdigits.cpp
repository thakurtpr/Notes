// Question: Write a recursive function to calculate the sum of the digits of a given integer n.
// Function signature: sumOfDigits(n)
// Example inputs:
// sumOfDigits(123) returns 6 (1 + 2 + 3)
// sumOfDigits(456) returns 15 (4 + 5 + 6)
// Constraints:
// Use recursion to solve the problem.
// Do not use loops (for, while, etc.).
// Assume n is a non-negative integer.
// Please provide your answer in the form of a code snippet (in any programming language).
// Take your time, and let me know when you're ready with your solution!


#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int digit){
    if (digit/10 == 0){
        return digit%10;
    }
    return (digit%10)+sumOfDigits(digit/10);
}
int main(){    
    cout<<"Enter the digit"<<endl;
    int n ; 
    cin>>n;
    cout<<"Sum of the digits are :="<<sumOfDigits(n)<<endl;
    return 0;
}