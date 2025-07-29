#include<bits/stdc++.h>
using namespace std;

void dutchflag(vector<int>& nums){
    int n = nums.size();
    int low  = 0 , mid =0 , high = n-1;
    while(mid<=high){
        if(nums[mid]== 0){
        swap(nums[mid],nums[low]);
        low++;
        mid++;
        }
        else if(nums[mid]== 1){
        mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
        
    }
    for(int i = 0; i < n; i++) {
        cout << nums[i]<< " ";
        }
}
    




int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    dutchflag(arr);
    return 0;
}
