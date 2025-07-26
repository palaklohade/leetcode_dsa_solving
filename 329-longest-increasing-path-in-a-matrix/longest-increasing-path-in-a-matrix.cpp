class Solution {
public:
int dirs[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    
    int dfs(int i , int j , vector<vector<int>>& matrix,vector<vector<int>>& dp){
        if(dp[i][j] != -1)return dp[i][j];

        int n  = matrix.size();
        int m = matrix[0].size();
        int maxlen = 1;
        for(auto& dir : dirs){
            int ni = i + dir[0];
            int nj = j + dir[1];
            if(ni >= 0 && nj >= 0 && ni <n && nj < m && matrix[ni][nj] > matrix[i][j]){
                maxlen = max(maxlen , 1+ dfs(ni , nj , matrix , dp));
            }    
        }
        return dp[i][j] = maxlen;
    }
    
        int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n  = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> dp(n , vector<int> (m, -1));
        int maxpath = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j  < m; j++){
                maxpath = max(maxpath , dfs(i, j , matrix, dp));
            }
        }
        return maxpath ;
    }
};