class Solution {
public:
    int cnt =0;
    bool issafe(vector<vector<int>>& solution , int row , int col , int n ){
        for(int i = 0 ; i < col ; i++){
            if(solution[row][i] == 1)
            return false;
        }
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (solution[i][j] == 1)
                return false;
        }
        for (int i = row + 1, j = col - 1; i < n && j >= 0; i++, j--) {
            if (solution[i][j] == 1)
                return false;
        }
        return true;
    }

    void solve(vector<vector<int>>& solution , int col , int n){
        if(col == n ){
            cnt++;
            return;
        }

        for (int row = 0; row < n; row++) {
            if (issafe(solution, row, col, n)) {
                solution[row][col] = 1;
                solve(solution, col + 1, n);
                solution[row][col] = 0;
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<int>> solution(n , vector<int>(n,0));
        solve(solution , 0 , n);
        return cnt;
    }
};