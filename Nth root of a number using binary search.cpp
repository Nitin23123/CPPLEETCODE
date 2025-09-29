#include <bits/stdc++.h>
using namespace std;

long long power(long long base, int n, long long limit) {
    long long result = 1;
    for (int i = 0; i < n; i++) {
        result *= base;
        if (result > limit) return limit + 1; // avoid overflow
    }
    return result;
}

int nthRoot(int x, int n) {
    int low = 1, high = x, ans = -1;
    if (x == 0) return 0;
    if (n == 1) return x;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long midPow = power(mid, n, x);

        if (midPow == x) return mid; // exact root
        else if (midPow < x) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans; // floor value
}

int main() {
    int x = 27, n = 3;
    cout << "Nth root = " << nthRoot(x, n) << endl;
    return 0;
}
