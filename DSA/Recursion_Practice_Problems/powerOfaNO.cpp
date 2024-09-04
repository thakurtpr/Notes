// Question: Write a recursive function to calculate the power of a given number x raised to n. For example, power(2, 3) should return 8.
// Function signature: power(x, n)
// Example inputs:
// power(2, 3) returns 8 (2 * 2 * 2)
// power(3, 4) returns 81 (3 * 3 * 3 * 3)
// Constraints:
// Use recursion to solve the problem.
// Do not use loops (for, while, etc.).
// Assume x is a real number and n is a non-negative integer.
// Please provide your answer in the form of a code snippet (in any programming language).







#include<bits/stdc++.h>
using namespace std;

int powerofAno(int digit,int power){
    if(power ==1){
        return digit;
    }
    return digit*powerofAno(digit,power-1);
}
int main(){    
    cout<<"Enter the NO and the power"<<endl;
    int x,n ; 
    cin>>x>>n;
    cout<<"Factorial of "<<n<<" is:="<<powerofAno(x,n)<<endl;
    return 0 ;    
}