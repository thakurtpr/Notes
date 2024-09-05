// Question: Write a recursive function to check if a given string is a valid binary string (i.e., contains only 0s and 1s).
// Function signature: isBinary(s)
// Example inputs:
// isBinary("1010") returns true
// isBinary("1234") returns false
// isBinary("10102") returns false
// Constraints:
// Use recursion to solve the problem.
// Do not use loops (for, while, etc.).
// Assume s is a non-empty string.






#include<bits/stdc++.h>
using namespace std;

bool isBinary(string input,int index){
    if (index == 0 ){
        return true;
    }
    else if (input[index]!='0' && input[index]!='1' ){
        return false ;
    }
    return isBinary(input,index-1);
}
int main(){    
    cout<<"Enter the string "<<endl;
    string n ; 
    cin>>n;
    int length = n.length()-1;
    cout<<"length"<<length<<endl;
    if (isBinary(n,length))
    {
        cout<<"its a binary"<<endl;
    }    
    else{
        cout<<"it not a binary"<<endl;
    }
    return 0;
}