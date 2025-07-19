class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board[0].size();
        int n = board.size();

        vector<pair<int, int>>dirs = {
            {-1, -1}, {-1, 0}, {-1, 1}, { 0, -1}, { 0, 1},{ 1, -1}, { 1, 0}, { 1, 1}
        };
        for(int i = 0 ; i < n ;i++){
            for(int j = 0 ; j < m ; j++){

                int live = 0;
                for(auto[dx,dy]: dirs){
                    int nx = i + dx;
                    int ny = j + dy;
                    if(nx >= 0 && nx < n && ny >= 0 && ny < m && abs(board[nx][ny] )== 1){
                        live++;
                    }
                }
                if(board[i][j] == 1 && (live < 2 || live > 3)){
                    board[i][j] = -1;

                }
                if(board[i][j] == 0 && live == 3){
                    board[i][j] = 2;
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (board[i][j] > 0)
                    board[i][j] = 1;
                else
                    board[i][j] = 0;
            }
        }
    }
};