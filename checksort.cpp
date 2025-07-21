#include<bits/stdc++.h>
using namespace std;


int checksort(vector<int> &arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Array is not sorted
        }
    }
    return 1; // Array is sorted
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    if (checksort(arr, n)) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    
    return 0;
}