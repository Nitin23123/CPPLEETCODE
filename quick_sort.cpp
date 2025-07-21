#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low ;
    int j= high;
    while (i<j){
        while (arr[i] <= pivot && i < high) {
            i++;
        }
        while (arr[j] > pivot && j > low) {
            j--;
        }   
        if (i < j) {
            swap(arr[i], arr[j]);
        }
        swap(arr[low], arr[j]); // Place pivot in the correct position
        return j; // Return the index of the pivot
    }
}
void qs(vector<int> &arr , int low , int high){
    if(low < high){
        int pindex= partition(arr, low, high);
        qs(arr, low, pindex - 1);
        qs(arr, pindex + 1, high);

    }
}
vector<int> quicksort(vector<int> arr){
    qs( arr, 0, arr.size() - 1);
    return arr;
}

int main(){
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    vector<int> sorted = quicksort(arr);
    for (int num : sorted) {
        cout << num << " ";
    }
    return 0;
}