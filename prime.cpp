#include<bits/stdc++.h>
using namespace std;

int prime(int n ){
    int count = 0;
    for (int i= 1; i* i <= n; i++){
        if (n % i == 0){
            count++;
            if (i != n / i) {
                count++;
            }
        }
    }
    return count == 2;
}

int main(){
    int n;
    cout << "Enter a number to check if it is prime: ";
    cin >> n;
    if (prime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}