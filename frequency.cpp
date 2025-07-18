#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){ 
        cin >> arr[i];
    }




    //precompute
    map<int,int> mpp;
    for(int i = 0; i <n; i++) {
        mpp[arr[i]]++;
    }
    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    //maximum frequency
    int max_freq = 0;
    for(auto it : mpp) {
        max_freq = max(max_freq, it.second);
    }
    // maximum frequecy key 
    int max_freq_key = -1;
    for(auto it : mpp) {
        if(it.second == max_freq) {
            max_freq_key = it.first;
            break;
        }
    }
    cout << "Maximum frequency key: " << max_freq_key << " with a frequency of " << max_freq << endl;
    return 0;
}