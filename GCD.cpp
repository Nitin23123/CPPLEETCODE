#include<bits/stdc++.h>
using namespace std;

int  gcd(int a, int b) {
    int g= 1;
    for (int i = min(a,b); i>=1; i--){
        if (a % i == 0 && b % i == 0) {
             return i; 
             break;
        }
    }
}

int newgcd(int a, int b) {
    while ( a != 0 && b != 0) {
        if (a > b) {
            a = a % b; // Reduce a
        } else {
            b = b % a; // Reduce b
        }
    }
    if (a == 0) return b; // If a is zero, return b
    else
    return a;
}

int main() {
    int a, b;
    cout << "Enter two numbers to find their GCD: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is: " << newgcd(a, b) << endl;
    return 0;
}