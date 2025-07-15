#include<bits/stdc++.h>

using namespace std;
// map is a data structure that stores key-value pairs in sorted order based on keys
void explainMap() {
    map<int,int > m;
    m[1] = 10; // {1: 10}
    m[2] = 20; // {1: 10, 2: 20}
    m[3] = 30; // {1: 10, 2: 20, 3: 30}
    m.emplace(4, 40); // {1: 10, 2: 20, 3: 30, 4: 40}
    m.insert({5, 50}); // {1: 10, 2: 20, 3: 30, 4: 40, 5: 50}
    for (auto it: m) {
        cout << it.first << ": " << it.second << endl; // Output key-value pairs
    }
    //now for another map with same keys but different values
    map<pair<int,int>,int> m1;
    m1[{1, 2}] = 100; // {(1, 2): 100}
    m1[{2, 3}] = 200; // {(1, 2): 100, (2, 3): 200}
    for (auto it: m1) {
        cout << "(" << it.first.first << ", " << it.first.second << "): " << it.second << endl; // Output key-value pairs
    }

    auto it = m.find(3); // Find key 3
    cout << it->second << endl; // Output value associated with key 3 (30)

    auto it1 = m.lower_bound(1); // Find first key not less than 2
    auto it2 = m.upper_bound(3); // Find first key greater than 2
    cout << "Lower bound of 2: " << (it1 != m.end() ? it1->second : -1) << endl;
    cout << "Upper bound of 2: " << (it2 != m.end() ? it2->second : -1) << endl;
}
int main() {
    explainMap();
    return 0;
}