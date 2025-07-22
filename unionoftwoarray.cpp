#include<bits/stdc++.h>
using namespace std;



// Function to find the union of two arrays
vector<int> unionarray2(const vector<int>& nums1, const vector<int>& nums2){
    int n1 = nums1.size();
    int n2 = nums2.size();
    int i = 0, j = 0;
    vector<int> result;
    while(i < n1 && j < n2) {
        if (nums1[i] < nums2[j]) {
            if (result.empty() || result.back() != nums1[i]) {
                result.push_back(nums1[i]); // Add unique element from arr1
            }
            i++;
        }
        else {
            if (result.empty() || result.back() != nums2[j]) {
                result.push_back(nums2[j]); // Add unique element from arr2
            }
            j++;
        }
    }
    while (i < n1) {
        if (result.empty() || result.back() != nums1[i]) {
            result.push_back(nums1[i]); // Add remaining unique elements from arr1
        }
        i++;
    }
    while (j < n2) {
        if (result.empty() || result.back() != nums2[j]) {
            result.push_back(nums2[j]); // Add remaining unique elements from arr2
        }
        j++;
    }
    cout << "Union using two pointers: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return result;
}

int main() {
    int n1, n2;
    cin >> n1; // Read the size of the first array
    vector<int> arr1(n1); // Create a vector of size n1

    for (int i = 0; i < n1; i++) {
        cin >> arr1[i]; // Read elements into the first array
    }

    cin >> n2; // Read the size of the second array
    vector<int> arr2(n2); // Create a vector of size n2

    for (int i = 0; i < n2; i++) {
        cin >> arr2[i]; // Read elements into the second array
    }

    unionarray2(arr1, arr2); // Call the function to find the union using two pointers
    cout << endl;

    return 0;
}