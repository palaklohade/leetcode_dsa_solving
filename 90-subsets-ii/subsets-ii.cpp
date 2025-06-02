class Solution {
public:
    set<vector<int>> result;
    void backtrack(int start ,vector<int>& nums,vector<int>& path ){
    result.insert(path);
    for(int i = start ; i < nums.size(); i ++){
        path.push_back(nums[i]);
        backtrack(i + 1 , nums , path);
        path.pop_back();
    }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> path;
        backtrack(0 , nums , path);
        vector<vector<int>> ans(result.begin() , result.end());
        return ans ;

    }
};