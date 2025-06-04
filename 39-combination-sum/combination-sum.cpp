class Solution {
public:
    vector<vector<int>> result;
    void backtrack( int i , vector<int>& candidates, int target , vector<int>& path){
    
        if(target == 0){
            result.push_back(path);
            return;
        }
        if(target < 0 || i == candidates.size())return;

        path.push_back(candidates[i]);
        backtrack(i , candidates , target - candidates[i] , path);
        path.pop_back();

        backtrack(i+ 1 , candidates, target , path);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> path;
        backtrack(0, candidates, target, path);
        return result;
    }
};