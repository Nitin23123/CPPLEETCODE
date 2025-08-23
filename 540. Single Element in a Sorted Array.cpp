class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // Ensure mid is even (points to first element of a pair)
            if (mid % 2 == 1) mid--;

            // Case 1: Pair is intact -> search right half
            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2;
            }
            // Case 2: Pair is broken -> search left half
            else {
                high = mid;
            }
        }

        // At the end low == high, pointing to the single element
        return nums[low];
    }
};
