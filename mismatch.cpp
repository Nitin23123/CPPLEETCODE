class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int rep = -1, mis = -1;
        int n = nums.size();
        vector<int> hash(n+1, 0);
        for(int i = 0 ; i <n ; i++){
            hash[nums[i]]++;
        }

        for (int i = 1; i <= n; i++) {
            if(hash[i]==2) rep = i;
            else if(hash[i]==0) mis = i;
        }
        return {rep, mis};
    }
};
