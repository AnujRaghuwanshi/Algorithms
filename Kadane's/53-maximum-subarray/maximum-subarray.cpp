class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0], maxsum = nums[0];
        int n = nums.size();
        for(int i=1; i<n; i++){
            curr = max(nums[i],curr+nums[i]);
            maxsum = max(curr,maxsum);
        }
        return maxsum;
    }
};

// It improves upon the O(n2) brute-force approach by traversing the array once and keeping track of the maximum sum ending at the current position
// Core Idea: For each element, decide whether to start a new subarray or extend the existing maximum subarray.

// Variations and Notes
// Handling All Negative Numbers: If the array contains only negative numbers, the standard Kadane's algorithm returns the highest negative number (closest to zero).
// Empty Subarray: If an empty subarray is allowed (resulting in a sum of 0), you should initialize max_so_far to 0 instead of nums[0]
