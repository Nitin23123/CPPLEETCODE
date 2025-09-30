class Solution {
public:
    long long total(vector<int>& piles, int speed) {   // ✅ return long long
        long long hours = 0;
        for (int pile : piles) {
            hours += (pile + (long long)speed - 1) / speed; // ceil(pile/speed)
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end()),
            ans = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int totalh = total(piles, mid);
            if (totalh <= h) {
                ans = mid;
                high = mid - 1;

            } else
                low = mid + 1;
        }
        return ans;
    }
};
