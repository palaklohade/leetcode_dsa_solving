class Solution {
public:
vector<vector<int>> result;
    void backtrack(vector<int>& nums, vector<bool>& used, vector<int>& path) {
        if (path.size() == nums.size()) {
            result.push_back(path);
            return;
        }

        for (int i = 0; i < nums.size(); ++i) {
            if (used[i]) continue;

           
            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;

            used[i] = true;
            path.push_back(nums[i]);
            backtrack(nums, used, path);
            path.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());  
        vector<int> path;
        vector<bool> used(nums.size(), false);
        backtrack(nums, used, path);
        return result;
    }
};