#include<bits/stdc++.h>
using namespace std;

void subarray(vector<int>& nums, int k){
    int n  = nums.size();
    vector<int> sub;
    int maxl= 0;
    for( int i = 0 ; i<n ; i++){
        int sum = 0;
        for (int j = i ; j < n ; j++){
            sum += nums[j];
            if (sum == k) {
                int len = j - i + 1;
                maxl = max(maxl, len);
        }
        }
    }
    cout<< maxl ;
}
int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int k;
    cin >> k;
    
    subarray(arr , k);
    return 0;
}