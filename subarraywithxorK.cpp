class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int xr= 0;
        map<int,int> mpp;
        mpp[xr]++;
        int cnt =  0;
        for (int i = 0 ; i<nums.size();i++){
            xr ^= nums[i];
            int x= xr^k;
            cnt = cnt + mpp[x];
            mpp[xr]++;
        }
    return cnt;

    }
};
