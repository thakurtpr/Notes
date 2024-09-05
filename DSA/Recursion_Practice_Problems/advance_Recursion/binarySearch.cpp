#include<bits/stdc++.h> 
using namespace std;

int binarySearch(int arr[],int target,int start,int end){
    if(start>end){
        return -1 ;
    }
    int mid = (start+end)/2;
    if (arr[mid]==target){
        return mid;
    }else if (arr[mid]>target){
       return binarySearch(arr, target, start, mid - 1);
    }else
        return binarySearch(arr, target, mid + 1, end);
}
int main(){    
    // int arr[]= {1, 2, 3, 4, 5};
    
    cout<<"Enter the size of array"<<endl;
    int size; 
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    for(int i = 0 ;i< size ;i++){
        cin>>arr[i];
    }
    int target ; 
    cout<<"enter the target "<<endl;
    cin>>target;

    cout<<"index of the element is :="<<binarySearch(arr, target, 0, size-1)<<endl;
    return 0;
}