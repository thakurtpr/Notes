#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Create an empty vector
    vector<int> vec;

    // Push elements to the back of the vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    // Print the vector
    cout << "Initial Vector: ";
    for (auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Insert an element at the front
    vec.insert(vec.begin(), 0);

    // Print the vector
    cout << "After insert(0) at front: ";
    for (auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Remove the first element
    vec.erase(vec.begin());

    // Print the vector
    cout << "After erase(first element): ";
    for (auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Remove the last element
    vec.pop_back();

    // Print the vector
    cout << "After pop_back(): ";
    for (auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Clear the vector
    vec.clear();

    // Check if the vector is empty
    if (vec.empty()) {
        cout << "Vector is empty." << endl;
    } else {
        cout << "Vector is not empty." << endl;
    }

    return 0;
}