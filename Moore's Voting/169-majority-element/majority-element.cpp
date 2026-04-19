class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq = 0, ans = -1;
        for(int i=0; i<n; i++){
            if(freq == 0) ans = nums[i];    //If count is 0, set candidate to the current element
            if(ans == nums[i]) freq++;      //If the current element matches the candidate, increment count.
            else freq--;                    //If it differs, decrement count
        }
        return ans;
    }
};

// Moore's Voting Algorithm is an efficient O(N) time and O(1) space algorithm used to find the majority element in an array—an element that appears more than [N/2] times. 
// It works by maintaining a candidate and a counter, cancelling out distinct elements until the majority candidate remains
