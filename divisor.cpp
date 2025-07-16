#include<bits/stdc++.h>
using namespace std;

int divisor(int n){
    for (int i = 1; i<=n ; i++){
        if( n%i == 0){
            cout << i << endl;
        }

    }
}
int main(){
    int n;
    cout << "tell the number:";
    cin >> n;
    divisor(n);
}