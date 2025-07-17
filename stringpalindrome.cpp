#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(const string &s, int l, int r) {
    if (l >= r) return true;                  // crossed or met middle
    if (s[l] != s[r]) return false;             // mismatch => not palindrome
    return checkPalindrome(s, l + 1, r - 1);// check inner substring
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;  // use getline if you want spaces
    int n = s.length();
    if (checkPalindrome(s, 0, n - 1)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
