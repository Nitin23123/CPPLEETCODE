#include<bits/stdc++.h>
using namespace std;

//void reverseArray(int arr[] ,int l ,int r){
   // if (l >= r) {
      //  return; // Base case: if left index is greater than or equal to right index, stop recursion
    //} else {
      //  swap(arr[l], arr[r]); // Swap the elements at left and right indices
    //    reverseArray(arr, l + 1, r - 1); // Recursive call with incremented left index and decremented right index
  //  }
//}

int array1(int arr[], int n , int i) {
    if (i = n/2) {
        return; 
    } else {
        swap(arr[i], arr[n - i - 1]); // Swap the first and last elements
        array1(arr , n , i+1);
    }
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n]; 
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    array1(arr, n, 0);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}