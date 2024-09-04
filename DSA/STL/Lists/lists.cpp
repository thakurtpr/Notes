#include <iostream>
#include <list>

using namespace std;

int main() {
    // Create an empty list
    list<int> lst;

    // Push elements to the back of the list
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);

    // Print the list
    cout << "Initial List: ";
    for (auto it = lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Push an element to the front of the list
    lst.push_front(0);

    // Print the list
    cout << "After push_front(0): ";
    for (auto it = lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Pop an element from the front of the list
    lst.pop_front();

    // Print the list
    cout << "After pop_front(): ";
    for (auto it = lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Pop an element from the back of the list
    lst.pop_back();

    // Print the list
    cout << "After pop_back(): ";
    for (auto it = lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Insert an element at a specific position
    lst.insert(next(lst.begin(), 2), 10);

    // Print the list
    cout << "After insert(10) at position 2: ";
    for (auto it = lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Remove an element from the list
    lst.remove(10);

    // Print the list
    cout << "After remove(10): ";
    for (auto it = lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Sort the list
    lst.sort();

    // Print the list
    cout << "After sort(): ";
    for (auto it = lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Reverse the list
    lst.reverse();

    // Print the list
    cout << "After reverse(): ";
    for (auto it = lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}