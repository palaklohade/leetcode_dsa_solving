class Solution {
public:
    void backtrack(int start, int n , int k , vector<vector<int>>& result , vector<int>& path){
        if(path.size() == k){
            result.push_back(path);
            return;
        }
        for(int i = start ; i <= n ; i++){
            path.push_back(i);
            backtrack(i+1, n , k , result, path);
            path.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> path;
        backtrack(1, n , k , result, path);
        return result;
    }

};