#include<bits/stdc++.h>
using namespace std;

void majority(vector<int>& nums){
    int n  = nums.size();
    map<int,int> mpp;
    for(int i = 0; i <n; i++) {
        mpp[nums[i]]++;
    }
    int maxfr = 0;
    for(auto it:mpp){
        maxfr =max(maxfr,it.second);
    }
    int maxelem = -1;
    for(auto it : mpp) {
        if(it.second == maxfr) {
            maxelem = it.first;
            break;
        }
    }
    if(maxfr > n/2){
        cout << maxelem ; 
    }
    
}


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    majority(arr);
    return 0;
}