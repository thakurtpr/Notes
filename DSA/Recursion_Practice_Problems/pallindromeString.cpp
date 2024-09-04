// Question: Write a recursive function to check if a given string s is a valid palindrome.
// Function signature: isPalindrome(s)
// Example inputs:
// isPalindrome("madam") returns true
// isPalindrome("hello") returns false
// Constraints:
// Use recursion to solve the problem.
// Do not use loops (for, while, etc.).
// Assume s is a non-empty string.
// Please provide your answer in the form of a code snippet (in any programming language).


#include<bits/stdc++.h>
using namespace std;

bool pallindrome(string input,int start ,int end ){
    if (start >= end ){
        return true;
    }
    else if (input[start]!=input[end]){
        return false;
    }
    return pallindrome(input,start+1,end-1);
   
}

int main(){    
    cout<<"Enter the string"<<endl;
    string input;
    cin>>input ;
    int size = input.size()-1;

    if (pallindrome(input,0,size) ){
        cout<<"String is pallindrome"<<endl;
    }else{
        cout<<"String is not pallindrome"<<endl;
    }
    return 0;
}