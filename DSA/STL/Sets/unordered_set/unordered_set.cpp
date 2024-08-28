#include<bits/stdc++.h>

using namespace std;

int main() {
  unordered_set < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the unordered set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in unordered set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the unordered set is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The unordered set is not empty " << endl;
  else
    cout << "The unordered set is empty" << endl;
  s.clear();
  cout << "Size of the unordered set after clearing all the elements: " << s.size();
}
// Output:

// Elements present in the unordered set: 10 9 8 7 2 1 3 4 5 6
// 2 is present in unordered set
// Elements after deleting the first element: 9 8 7 2 1 3 4 5 6
// The size of the unordered set is: 9
// The unordered set is not empty
// Size of the unordered set after clearing all the elements: 0