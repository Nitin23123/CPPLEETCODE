#include<bits/stdc++.h>

using namespace std;
//multimap is a ds that stores key-value pairs in sorted order based on keys, allowing multiple values for the same key
void explainMultimap() {
    multimap<int, string> mm;
    mm.insert({1, "one"});
    mm.insert({2, "two"});
    mm.insert({2, "deux"});
    mm.insert({3, "three"});
    mm.insert({3, "trois"});
    for (auto it: mm) {
        cout << it.first << ": " << it.second << endl;
    }
    auto range = mm.equal_range(2);
    cout << "Values for key 2: ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }
    cout << endl;

}
int main() {
    explainMultimap();
    return 0;
}