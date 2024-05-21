class Solution {
public:
    void markRow( vector<vector<int>>& matrix, int row, int col, int n){
        for( int i = 0; i < n; i++ ){
            if( matrix[row][i] != 0 ){
                matrix[row][i] = -1;
            }
            else if( matrix[row][i] == 0 && matrix[row][col] == 0 ){
                matrix[row][i] = -1;
            }
        }
    }
    void markCol( vector<vector<int>>& matrix, int row, int col, int m){
        for( int i = 0; i < m; i++ ){
            if( matrix[i][col] != 0){
                matrix[i][col] = -1;
            }
            else if( matrix[i][col] == 0 && matrix[row][col] == 0){
                matrix[i][col] = -1;
            }
            
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        for( int i = 0; i < m; i++ ){
            for( int j = 0; j < n; j++ ){
                if( matrix[i][j] == 0 ){
                    markRow(matrix, i, j, n);
                    markCol( matrix, i, j, m);
                }
            }
        }

        for( int i = 0; i < m; i++ ){
            for( int j = 0; j < n; j++ ){
                if( matrix[i][j] == -1 ){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};