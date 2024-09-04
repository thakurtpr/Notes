// Question: Write a recursive function to find the first occurrence of a given element x in a sorted array arr.
// Function signature: findFirst(arr, x)
// Example inputs:
// findFirst([1, 2, 3, 4, 5], 3) returns 2 (index of the first occurrence of 3)
// findFirst([1, 2, 3, 4, 5], 6) returns -1 (element not found)
// Constraints:
// Use recursion to solve the problem.
// Do not use loops (for, while, etc.).
// Assume arr is a sorted array and x is an integer.


#include<bits/stdc++.h>
using namespace std;

int occurence(int arr[],int digit,int size ){
   if(size == 5 ){
     if(arr[size]==digit){
        return size;
     }
     else{
        return -1 ;
     }
   }
    else if (arr[size]!=digit){
       return occurence(arr,digit,size+1);
    }
    else{
        return size;
    }
    
}

int main(){    
    cout<<"Enter the array "<<endl;
    int arr[5];
    for(int i= 0;i<5;i++){
        cin>>arr[i];
    }
    int digit ; 
    cout<<"enter the digit to find the occurence of "<<endl;
    cin>>digit ; 
    cout<<"Occurence of the digit is = "<<occurence(arr,digit,0)<<endl;
    return 0;
}