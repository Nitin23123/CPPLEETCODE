class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Found target
            if (nums[mid] == target)
                return mid;

            // Check if left half is sorted
            if (nums[low] <= nums[mid]) {
                // Target lies in the left sorted half
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            // Otherwise, right half is sorted
            else {
                // Target lies in the right sorted half
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return -1; // target not found
    }
};
