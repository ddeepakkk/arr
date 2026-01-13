#include <climits>

int findSecondMaximum(int nums[], int n) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (nums[i] > max1) {
            max2 = max1;
            max1 = nums[i];
        } 
        else if (nums[i] > max2 && nums[i] < max1) {
            max2 = nums[i];
        }
    }

    if (max2 != INT_MIN) {
        return max2;
    } else {
        return -1;  // No second maximum found
    }
}
