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

int findMax(int arr[],int n)
{
//    int max = arr[n];
    if(n==0){
        return arr[0];
    }
    int maximum= findMax(arr,n-1);
    if (arr[n]>maximum)
        return arr[n];
    return maximum;
}
int main(){    

    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array "<<endl;
    for(int i = 0 ;i< size;i++){
        cin>>arr[i];
    }
    cout<<"Maximum element is := "<<findMax(arr,size-1)<<endl;
    return 0;
}