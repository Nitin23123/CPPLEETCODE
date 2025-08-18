class Solution {
  public:
    // Merges two sorted halves and counts inversions
    long long mergeAndCount(vector<int> &arr, int left, int mid, int right) {
        // Create temporary vectors for both halves
        vector<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);
        vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + right + 1);

        int i = 0;                 // pointer for leftArr
        int j = 0;                 // pointer for rightArr
        int k = left;              // pointer to place merged elements back in arr
        long long invCount = 0;    // inversion count for this merge

        // Two-pointer merge
        while (i < leftArr.size() && j < rightArr.size()) {
            if (leftArr[i] <= rightArr[j]) {
                // No inversion in this case, just copy leftArr[i]
                arr[k++] = leftArr[i++];
            }
            else {
                // This means leftArr[i] > rightArr[j]
                // and because leftArr is sorted, ALL remaining elements
                // from i to end of leftArr will also be > rightArr[j].
                arr[k++] = rightArr[j++];
                invCount += (leftArr.size() - i);
            }
        }

        // Copy the remaining elements from leftArr (if any)
        while (i < leftArr.size()) {
            arr[k++] = leftArr[i++];
        }

        // Copy the remaining elements from rightArr (if any)
        while (j < rightArr.size()) {
            arr[k++] = rightArr[j++];
        }

        return invCount;
    }

    // Recursively apply merge sort and aggregate inversion counts
    long long mergeSortAndCount(vector<int> &arr, int left, int right) {
        long long invCount = 0;
        if (left < right) {
            int mid = left + (right - left) / 2;

            // Inversions in left half
            invCount += mergeSortAndCount(arr, left, mid);
            // Inversions in right half
            invCount += mergeSortAndCount(arr, mid + 1, right);
            // Inversions while merging both halves
            invCount += mergeAndCount(arr, left, mid, right);
        }
        return invCount;
    }

    long long inversionCount(vector<int> &arr) {
        return mergeSortAndCount(arr, 0, arr.size() - 1);
    }
};
