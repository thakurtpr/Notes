#include <iostream>
#include <utility>

using namespace std;

int main() {
    // Constructors
    pair<int, string> p1; // default constructor
    pair<int, string> p2(1, "one"); // constructor with elements
    pair<int, string> p3(p2); // copy constructor
    pair<int, string> p4 = make_pair(2, "two"); // make_pair

    // Assignment Operators
    p1 = p2; // copy assignment
    p1 = make_pair(3, "three"); // move assignment

    // Comparison Operators
    if (p1 == p2) cout << "p1 and p2 are equal" << endl;
    if (p1 != p3) cout << "p1 and p3 are not equal" << endl;
    if (p1 < p4) cout << "p1 is less than p4" << endl;
    if (p1 > p3) cout << "p1 is greater than p3" << endl;
    if (p1 <= p4) cout << "p1 is less than or equal to p4" << endl;
    if (p1 >= p3) cout << "p1 is greater than or equal to p3" << endl;

    // Accessing Elements
    cout << "p1.first: " << p1.first << endl;
    cout << "p1.second: " << p1.second << endl;

    // Swap
    swap(p1, p2);
    cout << "p1.first: " << p1.first << endl;
    cout << "p1.second: " << p1.second << endl;

    return 0;
}