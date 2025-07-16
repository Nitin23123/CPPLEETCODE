#include<bits/stdc++.h>
using namespace std;

void printName(int n, int i){
    if (i > n) {
        return; // Base case: if i exceeds n, stop recursion
    }
    else {
        cout << "Name: " << "Nitin" << endl;
        printName(n, i + 1);
    }
}
int main() {
    int n ;
    cin >> n;
    printName(n, 1);
    return 0;
} 