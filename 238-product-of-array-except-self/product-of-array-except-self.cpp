class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        int zeroCount = 0;

        for (int num : nums) {
            if (num != 0)
                product *= num;
            else
                zeroCount++;
        }

        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            if (zeroCount > 1) {
                res[i] = 0;
            } else if (zeroCount == 1) {
                res[i] = nums[i] == 0 ? product : 0;
            } else {
                res[i] = product / nums[i];
            }
        }

        return res;
    }
};