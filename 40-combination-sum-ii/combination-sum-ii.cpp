class Solution {
public:
    vector<vector<int>> result;
    void backtrack(int i ,vector<int>& candidates, int target , vector<int>& path ){
        if(target == 0){
            result.push_back(path);
            return;
        }
        if(target < 0 || i == candidates.size())return;

        path.push_back(candidates[i]);
        backtrack(i+1, candidates, target - candidates[i], path);
        path.pop_back();
        int j = i + 1;
        while( j < candidates.size() && candidates[j] == candidates[i]) {
            j++;
        }
         backtrack(j, candidates, target , path);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> path;
        sort(candidates.begin(), candidates.end());
        backtrack(0,candidates,target, path);
        return result;
    }
};