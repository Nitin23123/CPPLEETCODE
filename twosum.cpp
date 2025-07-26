#include <bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>& result[]; 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) { // No need to check same pair twice
                if(nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(i);
                    return result;
            }
        }
    }
}
int main()
 {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int target;
    cin >> target;
    
    twoSum(arr, target);
    return 0;
}
