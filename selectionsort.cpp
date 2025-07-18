#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    // Traverse through all array elements
    for (int i = 0; i <= n - 2; i++) {
        int min = i;
        // Find the minimum element in unsorted array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        // swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

    }
}



int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i= 0; i < n; i++){
        selectionSort(arr, n);
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}