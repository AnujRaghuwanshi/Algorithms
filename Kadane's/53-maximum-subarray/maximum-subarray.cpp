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
