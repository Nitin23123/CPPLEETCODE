#include<bits/stdc++.h>
using namespace std;

void backtrack(int n , int i){
    if (i < 1) {
        return; // Base case: if i is less than 1, stop recursion
    } else {
        
        backtrack(n , i - 1); // Recursive call with decremented i
        cout << i << " ";
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    backtrack(n, n); // Start backtracking from n
    cout << endl;
    return 0;
}