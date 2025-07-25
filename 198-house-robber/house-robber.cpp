class Solution {
public:
    vector<int> dp;

    int robber(int i , vector<int>& nums){
        if (i >= nums.size()) return 0;
        if (dp[i] != -1) return dp[i];
        int robCurrent = nums[i] + robber(i + 2, nums);
        int skipCurrent = robber(i + 1, nums);
        return dp[i] = max(robCurrent, skipCurrent);  
          }
    int rob(vector<int>& nums) {
        dp.assign(nums.size(), -1); 
        return robber(0, nums);

    }
};