#include<bits/stdc++.h>
using namespace std;

void removeduplicate(vector<int> &arr){
    set<int> st;
    for (int i = 0; i < arr.size(); i++) {
        st.insert(arr[i]);
    }
    arr.clear();
    for (auto it : st) {
        arr.push_back(it);
    }
    cout<< arr.size() << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    removeduplicate(arr);
    return 0;
}