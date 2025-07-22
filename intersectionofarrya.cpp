#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0, j = 0;
        vector<int> result;
        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                i++; // Move pointer in nums1
            } else if (nums1[i] > nums2[j]) {
                j++; // Move pointer in nums2
            } else {
                if (result.empty() || result.back() != nums1[i]) {
                    result.push_back(nums1[i]); // Add common element to result
                }
                i++;
                j++;
            }
        }
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

    vector<int> result = intersection(arr1, arr2); // Find intersection
    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " "; // Output the result
    }
    cout << endl;

    return 0;
}