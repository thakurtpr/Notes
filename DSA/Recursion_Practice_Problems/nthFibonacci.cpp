// Question: Write a recursive function to calculate the nth Fibonacci number.
// Function signature: fib(n)
// Example inputs:
// fib(0) returns 0
// fib(1) returns 1
// fib(2) returns 1
// fib(3) returns 2
// fib(4) returns 3
// fib(5) returns 5
// Constraints:
// Use recursion to solve the problem.
// Do not use loops (for, while, etc.).
// Assume n is a non-negative integer.
// Please provide your answer in the form of a code snippet (in any programming language).
// Note: The Fibonacci sequence is defined as: fib(n) = fib(n-1) + fib(n-2) for n > 1, and fib(0) = 0, fib(1) = 1.


#include<bits/stdc++.h>
using namespace std;

int nthFib(int n ){
    if(n==0 || n==1 ){
        return n;
    }
    return nthFib(n-1) + nthFib(n-2);   
}

int main(){    
    int n ;
    cin>>n;
    cout<<"nth fib is := "<<nthFib(n-1)<<endl;
    return 0;
}