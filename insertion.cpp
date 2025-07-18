#include<bits/stdc++.h>
using namespace std;  

void insertionsort(int arr[], int n) {
    for(int i= 0 ; i <= n-1 ; i++) {
        int j = i;
        while( j > 0 && arr[j-1] > arr[j]) {
            // Swap the elements
            swap(arr[j], arr[j-1]);
            j--; 
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    insertionsort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}