// Question 11: Write a function to check if a given string is a palindrome. A palindrome is a string that reads the same backward as forward.
// Function signature: isPalindrome(str)
// Example inputs:
// radar (true)
// hello (false)
// Constraints:
// Use recursion to solve the problem.
// Do not use loops (for, while, etc.).
// Assume the input string is non-empty and only contains alphanumeric characters.
// Please provide your answer in the form of a code snippet (in any programming language).
// Note: I'll wait for your response before giving you the next question. Take your time!


#include<bits/stdc++.h>
using namespace std;

bool pallindromString(string inputs,int start ,int end){
    // return inputs;
    if (start>=end ) { 

        return true;
    }
    else if (inputs[start]!=inputs[end]){
        // pallindromString()
        return false;
    }
    return pallindromString(inputs,start+1,end-1);
}
int main(){
    string inputs ;
    cout<<"Enter the inputs for the string" <<endl;
    cin>>inputs;
    int start = 0 ; 
    int end  = inputs.size();
    bool returned = pallindromString(inputs,start,end-1);
    if ( returned == true)
     cout<<"Pallindrome"<<endl;
    else 
     cout<<"Not Pallindrom"<<endl;
    
    return 0 ;
}