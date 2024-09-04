// Question: Write a recursive function to find the greatest common divisor (GCD) of two integers a and b.
// Function signature: gcd(a, b)
// Example inputs:
// gcd(12, 15) returns 3
// gcd(24, 30) returns 6
// Constraints:
// Use recursion to solve the problem.
// Do not use loops (for, while, etc.).
// Assume a and b are non-negative integers.
// Please provide your answer in the form of a code snippet (in any programming language).

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if (a%b==0){
        return b;
    }
    return gcd(a,a%b);
}
int main(){    
    cout<<"Enter the No's"<<endl;
    int a ,b;
    cin>>a>>b;
    cout<<"greatest Common Divisor is :="<<gcd(a,b)<<endl;

    return 0;
}