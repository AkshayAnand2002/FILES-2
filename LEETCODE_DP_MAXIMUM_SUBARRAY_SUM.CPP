https://leetcode.com/problems/maximum-subarray/submissions/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        dp[0]=nums[0];
        int max_so_far=dp[0];
        for(int i=1;i<n;i++){
            dp[i]=(dp[i-1] > 0 ? dp[i-1] : 0)+nums[i];
            max_so_far=max(dp[i],max_so_far);
        }
        return max_so_far;
    }
};
