class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int m = nums.size() - k;
        // for(int i = 0 ; i < nums.size() ; i++){
        //     return nums[m + 1];
        // }
        return nums[m];
    }
};