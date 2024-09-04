// Question: Write a recursive function to calculate the factorial of a given integer n. The factorial of n is the product of all positive integers less than or equal to n.
// Function signature: factorial(n)
// Example inputs:
// factorial(5) returns 120 (5 * 4 * 3 * 2 * 1)
// factorial(3) returns 6 (3 * 2 * 1)
// Constraints:
// Use recursion to solve the problem.
// Do not use loops (for, while, etc.).
// Assume n is a non-negative integer.
// Please provide your answer in the form of a code snippet (in any programming language).
// I'll wait for your response before giving you the next question. Take your time!




#include<bits/stdc++.h>
using namespace std;

int fact(int digit){
  if (digit == 1 ){
    return 1;
  }
  else{
    return digit*fact(digit-1);
  }
}
int main(){    
    cout<<"Enter the NO"<<endl;
    int n ; 
    cin>>n;
    cout<<"Factorial of "<<n<<" is:="<<fact(n)<<endl;
    return 0 ;    
}