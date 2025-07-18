#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    


    //precompute 
    int hash[256] = {0};
    for(int i = 0; i < s.length(); i++) {
        hash[s[i]] += 1;
    }



    int q ;
    cin >> q;
    while (q--) {
        char x;
        cin >> x;
        cout << hash[x] << endl;
    }
    return 0;
}