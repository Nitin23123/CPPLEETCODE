#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;


    //precompute
    unordered_map<char,int> mpp;
    for(int i = 0; i < s.length(); i++) {
        mpp[s[i]]++;
    }
    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    int q ;
    cin >> q;
    while (q--) {
        char x;
        cin >> x;
        cout << mpp[x] << endl;
    }


}