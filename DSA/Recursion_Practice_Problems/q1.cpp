// Question 10: Write a recursive function to calculate the sum of all elements in an array.
// Function signature: sumArray(arr)
// Example input: [1, 2, 3, 4, 5]
// Example output: 15
// Constraints:
// Use recursion to solve the problem.
// Do not use loops (for, while, etc.).
// Assume the input array is non-empty.
// Please provide your answer in the form of a code snippet (in any programming language). 
// I'll help you verify the solution and provide feedback!



#include<bits/stdc++.h>
using namespace std;

int sumArray(int arr[],int size){
    int sum = arr[size-1] ;
    if (size == 0){
        return 0 ;
    }
    sum = sum + sumArray(arr,size-1);
    return sum ; 
}
int main(){
    cout<<" Enter The Size of The Array "<<endl;
    int size; 
    cin>>size ;
    cout << "Enter the Elements"<<endl;
    int arr[size];
    // int size = sizeof(arr) / sizeof(arr[0]);
    for ( int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    int totalSum = sumArray(arr,size);
    cout<< " The total Sum is :"<<totalSum<<endl;
    return 0 ;
}