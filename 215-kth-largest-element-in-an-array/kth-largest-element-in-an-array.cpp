class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int m = nums.size() - k;
        return nums[m];
    }
};
       //priority queue is the optimised solution.
        //not optimised solution to this problem. 