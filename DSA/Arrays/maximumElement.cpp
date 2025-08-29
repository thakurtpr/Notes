// Find the Maximum Element in an Array
#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max= INT_MIN ;   
    int i = 0 ;
    while( i < size){
        if (arr[i]>max){
            max=arr[i];
        }
        i++;
    }
    return max; // Replace with your implementation
}

int main() {
    int arr[] = {3, 5, 1, 2, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, size);
    cout << "Maximum element: " << max << endl;
    return 0;
}