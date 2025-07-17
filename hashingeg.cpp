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
    int sum[13] = {0};
    for(int i = 0; i < n; i++) {
        sum[arr[i]] += 1;
    }

    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;
        cout << sum[x] << endl;
    }
    return 0;


}