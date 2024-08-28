#include <iostream>
#include <set>

using namespace std;

int main() {
    // Create an empty set
    set<int> s;

    // Insert elements
    s.insert(5);
    s.insert(2);
    s.insert(8);
    s.insert(1);

    // Print the set
    cout << "Elements in the set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Find an element
    auto it = s.find(2);
    if (it != s.end()) {
        cout << "Element 2 found in the set." << endl;
    } else {
        cout << "Element 2 not found in the set." << endl;
    }

    // Lower bound
    it = s.lower_bound(3);
    if (it != s.end()) {
        cout << "First element not less than 3: " << *it << endl;
    } else {
        cout << "No element not less than 3 found." << endl;
    }

    // Upper bound
    it = s.upper_bound(3);
    if (it != s.end()) {
        cout << "First element greater than 3: " << *it << endl;
    } else {
        cout << "No element greater than 3 found." << endl;
    }

    // Erase an element
    s.erase(2);

    // Print the set after erasing an element
    cout << "Elements in the set after erasing 2: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}

// Output
// Elements in the set: 1 2 5 8 
// Element 2 found in the set.
// First element not less than 3: 5
// First element greater than 3: 5
// Elements in the set after erasing 2: 1 5 8 