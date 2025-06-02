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


    // can be handles without set aslo just need to add a line in the backtrack function 
    // add - if (i > start && nums[i] == nums[i - 1]) continue; 
    //this will detect the duplicates and rest write hte same logic 
};