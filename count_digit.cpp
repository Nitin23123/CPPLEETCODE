#include<bits/stdc++.h>
using namespace std;

int countdigit(int n){
    int count = 0;
    while(n > 0){
        count++;
        n=n/10;
    }
    return count;
}
int main(){
    int n ;
    cout << "Enter a number: ";
    cin >> n;
    countdigit(n);
}