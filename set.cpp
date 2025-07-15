#include<bits/stdc++.h>

using namespace std;
// set is a data structure that stores unique elements in sorted order

void explainSet() {
    set<int> s;
    s.insert(10); // {10}
    s.insert(20); // {10, 20}
    s.emplace(30); // {10, 20, 30}
    s.insert(20); // Duplicate, will not be added
    s.insert(5); // {5, 10, 20, 30}

    cout << "Set elements: ";
    for (const auto& elem : s) {    
        cout << elem << " ";
    }
    cout << endl;

    auto it = s.find(240); // Find element 20
    if (it != s.end()) {// Check if found 
        cout << "Found: " << *it << endl; // Output: Found: 20
    } else {
        cout << "Not found" << endl;
    }

    int cnt = s.count(20); // Count occurrences of 20
    cout << "Count of 20: " << cnt << endl; // Output: Count of 20: 1

    auto it1 = s.find(10); // Find element 10
    auto it2 = s.find(30); // Find element 30
   // s.erase(it1, it2); // Erase elements in range [10, 30)
    cout << "Set after erasing elements in range [10, 30): ";
    for (const auto& elem : s) {
        cout << elem << " ";
    }
    cout << endl;
    auto it3 = s.lower_bound(20); // Find first element not less than 20
    auto it4 = s.upper_bound(20); // Find first element greater than 20
    cout << "Lower bound of 20: " << (it3 != s.end() ? to_string(*it3) : "not found") << endl; // Output: 20
    cout << "Upper bound of 20: " << (it4 != s.end() ? to_string(*it4) : "not found") << endl; // Output: 30    
}

int main() {
    explainSet();
    return 0;
}

