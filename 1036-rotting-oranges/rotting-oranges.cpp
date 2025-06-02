class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        queue<pair<int, int>> q;
        int fresh = 0;
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
                if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }
         int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};

        int minu = 0;
        while (!q.empty() && fresh > 0){
            int size = q.size();
            for(int i = 0 ; i < size ; i++){
                auto[x, y] = q.front() ; 
                q.pop();
        for(int dir= 0 ; dir < 4 ; dir++){
            int nx = x +dx[dir] ;
            int ny = y + dy[dir]    ;

            if(nx >= 0 && ny >= 0 && nx < row && ny < col && grid[nx][ny] == 1){
                grid[nx][ny] = 2;
                fresh --;
                q.push({nx, ny});
            }
        }
     }
    minu++;
    }
    return fresh == 0 ? minu : -1;
    }

};