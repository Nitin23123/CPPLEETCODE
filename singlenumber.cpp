#include<bits/stdc++.h>
using namespace std;

void singleNumber(vector<int>& arr) {
    unordered_map<int, int> countMap;
    for (int num : arr) {       
        countMap[num]++;
    }       
    for (const auto& pair : countMap) {
        if (pair.second == 1) { // Check if the count is 1
            cout << "The single number is: " << pair.first << endl;
            return; // Exit after finding the single number
        }
    }
}