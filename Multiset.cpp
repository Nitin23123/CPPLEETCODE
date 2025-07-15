#include<bits/stdc++.h>

using namespace std;
// multiset is a data structure that stores elements in sorted order, allowing duplicates
void explainMultiset() {
    multiset<int> ms;
    ms.insert(10); // {10}
    ms.insert(20); // {10, 20}
    ms.emplace(30); // {10, 20, 30}
    ms.insert(20); // Duplicate, will be added
    ms.insert(5); // {5, 10, 20, 20, 30}

    cout << "Multiset elements: ";
    for (const auto& elem : ms) {
        cout << elem << " ";
    }
    cout << endl;

    auto it = ms.find(20); // Find element 20
    if (it != ms.end()) { // Check if found 
        cout << "Found: " << *it << endl; // Output: Found: 20
    } else {
        cout << "Not found" << endl;
    }

    int cnt = ms.count(20); // Count occurrences of 20
    cout << "Count of 20: " << cnt << endl; // Output: Count of 20: 2

    auto it1 = ms.find(10); // Find element 10
    auto it2 = ms.find(30); // Find element 30
    ms.erase(it1, it2); // Erase elements in range [10, 30)
    cout << "Multiset after erasing elements in range [10, 30): ";
    for (const auto& elem : ms) {
        cout << elem << " ";
    }
    
}
int main() {
    explainMultiset();
    return 0;
}


