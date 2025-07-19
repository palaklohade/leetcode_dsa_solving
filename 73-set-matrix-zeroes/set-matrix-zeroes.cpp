class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        bool zerocol = false;
        bool zerorow = false;

        for(int j = 0 ; j < m; j++){
            if(matrix[0][j] == 0){
                zerorow = true;
                break;
            }
        }
        for(int i = 0 ; i < n; i++){
            if(matrix[i][0] == 0){
                zerocol = true;
                break;
            }
        }
        for(int i = 1 ; i < n ; i++){
            for(int j = 1 ; j < m ; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] =0 ;
                }
            }
        }

        for(int i = 1 ; i < n ; i++){
            for(int j = 1 ; j < m ; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        if (zerorow) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }
        if (zerocol) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};