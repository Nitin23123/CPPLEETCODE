#include<bits/stdc++.h>
using namespace std;

int palindorme(int n ){
    int digit= 0;
    int copy = n; // Store the original number for comparison
    while(n>0){
        digit = digit*10 + n % 10; // Build the reversed number
        n /= 10; // Remove the last digit
    }
    if(copy == digit) {
        cout << "The number is a palindrome: " << digit << endl; // Output if it's a palindrome
    } else {
        cout << "The number is not a palindrome: " << digit << endl; // Output if it's not a palindrome
    }
}
int main(){
    int n;
    cout << "enter the number ";
    cin >> n;
    palindorme(n);
}