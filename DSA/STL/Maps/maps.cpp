#include <iostream>
#include <map>

using namespace std;

int main() {
    // Create a map
    map<string, int> myMap;

    // Insert elements
    myMap.insert({"apple", 5});
    myMap.insert({"banana", 10});
    myMap.insert({"orange", 15});

    // Print map size
    cout << "Map size: " << myMap.size() << endl;

    // Find an element
    auto it = myMap.find("banana");
    if (it != myMap.end()) {
        cout << "Found: " << it->first << " -> " << it->second << endl;
    }

    // Count elements with a given key
    cout << "Count of 'apple': " << myMap.count("apple") << endl;

    // Lower bound
    it = myMap.lower_bound("banana");
    cout << "Lower bound of 'banana': " << it->first << " -> " << it->second << endl;

    // Upper bound
    it = myMap.upper_bound("banana");
    cout << "Upper bound of 'banana': " << it->first << " -> " << it->second << endl;

    // Equal range
    auto range = myMap.equal_range("banana");
    cout << "Equal range of 'banana': ";
    for (auto it2 = range.first; it2 != range.second; ++it2) {
        cout << it2->first << " -> " << it2->second << " ";
    }
    cout << endl;

    // Erase an element
    myMap.erase("apple");

    // Print map size
    cout << "Map size after erase: " << myMap.size() << endl;

    // Check if map is empty
    cout << "Is map empty? " << (myMap.empty() ? "Yes" : "No") << endl;

    // Clear the map
    myMap.clear();

    // Print map size
    cout << "Map size after clear: " << myMap.size() << endl;

    // Additional operations
    myMap["grape"] = 20;
    cout << "Map size after adding 'grape': " << myMap.size() << endl;

    // Check if a key exists
    cout << "Does 'banana' exist? " << (myMap.find("banana") != myMap.end() ? "Yes" : "No") << endl;

    // Access an element
    cout << "Value of 'grape': " << myMap["grape"] << endl;

    // Update an element
    myMap["grape"] = 25;
    cout << "Updated value of 'grape': " << myMap["grape"] << endl;

    return 0;
}