#include<bits/stdc++.h>
using namespace std;

int reverse(int n ){
    int digit= 0;
    while(n>0){
        digit = digit*10 + n % 10; // Build the reversed number
        n /= 10; // Remove the last digit
    }
    cout << "Reversed number: " << digit << endl; // Output the reversed number
}

int main(){
    int n;
    cout << "enter the number ";
    cin >> n;
    reverse(n);
}