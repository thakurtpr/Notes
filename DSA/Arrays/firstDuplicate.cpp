#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(int arr[], int size) {
    unordered_set<int> mySet;
    vector<int> duplicates;
    for( int i = 0 ;i< size ; i++){
        if(mySet.find(arr[i]) != mySet.end()){
            duplicates.push_back(arr[i]);
        } else {
            mySet.insert(arr[i]);
        }
    }
    return duplicates;
}

int main() {
    int arr[] = {2, 5, 1, 2, 9, 7,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> duplicates = findDuplicates(arr, size);
    if (duplicates.size()!= 0) {
        for(int num : duplicates){
            cout<< "Duplicates are : "<<num<<endl;
        }
    } else {
        cout << "No duplicates found" << endl;
    }
    return 0;
}