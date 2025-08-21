pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
    int low = 0, high = n - 1;
    int floorVal = -1, ceilVal = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == x) {
            // If exact match, both floor and ceil are same
            return {a[mid], a[mid]};
        }
        else if (a[mid] < x) {
            floorVal = a[mid];  // candidate floor
            low = mid + 1;      // try to find a bigger floor
        } 
        else {
            ceilVal = a[mid];   // candidate ceil
            high = mid - 1;     // try to find a smaller ceil
        }
    }

    return {floorVal, ceilVal};
}
