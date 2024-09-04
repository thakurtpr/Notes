// Question 12: Write a function to find the maximum element in an array using recursion.
// Function signature: maxArray(arr, size)
// Example inputs:
// [1, 2, 3, 4, 5] (returns 5)
// [-1, -2, -3, -4, -5] (returns -1)
// Constraints:
// Use recursion to solve the problem.
// Do not use loops (for, while, etc.).
// Assume the input array is non-empty.
// Please provide your answer in the form of a code snippet (in any programming language).



//NNNNNNNNNNNoooooooooooot completed 


#include<bits/stdc++.h>
using namespace std;

int maxArray(int arr[], int size){
    if(size == 1 ){
        return arr[size-1];
    }

    int max = arr[size-1];
    if ( maxArray(arr,size-1)  > max){
        return max=arr[size-1];
    }
  
}
int main(){    
    cout<<"Enter the size of the array "<<endl;
    int size ; 
    cin>> size;
    int arr[size]; 
    cout<<"Enter the elements for the array "<<endl;
    for( int i = 0 ;i < size ; i ++ ){
        cin>>arr[i];
    }
    cout<<"Maimum elements in the array is : "<<maxArray(arr,size)<<endl;
    return 0 ;
}