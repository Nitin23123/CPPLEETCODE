#include<bits/stdc++.h>
using namespace std;

void secondlargest(vector<int> &arr , int n){
    int largest = arr[0];
    int second_largest = -1;
    for (int i = 0 ; i < n ; i++)
    {
        if ( arr[i] > largest ){
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
        
    }
    cout << "Largest element: " << largest << endl;
    cout << "Second largest element: " << second_largest << endl;

}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    secondlargest(arr, n);
}