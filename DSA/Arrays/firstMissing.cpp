#include <bits/stdc++.h>
using namespace std;

int findFirstMissingPositive(int arr[], int size) {
    unordered_set<int> mySet; 
    for ( int i = 0 ;i< size ; i++){
        mySet.insert(arr[i]);
    }
    for ( int i = 1 ;i< size ; i++){
        if(mySet.find(i)==mySet.end()){
            return i ;
        }
    
    }
    return -1; // Replace with your implementation
}

int main() {
    int arr[] = {3, 5, 1, 2, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int missing = findFirstMissingPositive(arr, size);
    if (missing != -1) {
        cout << "First missing positive integer: " << missing << endl;
    } else {
        cout << "No missing positive integers" << endl;
    }
    return 0;
}