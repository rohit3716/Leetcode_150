class Solution {
public:
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));

        for( int j = 0; j < m; j++) dp[0][j] = matrix[0][j];

        for( int i = 1; i < n; i++) {
            for( int j = 0; j < m; j++) {
                int up = matrix[i][j] + dp[i-1][j];
                int leftD = matrix[i][j];
                if( j-1 >= 0 ) leftD += dp[i-1][j-1];
                else leftD += 1e8;
                int rightD = matrix[i][j];
                if( j + 1 < m ) rightD += dp[i-1][j+1];
                else rightD += 1e8;
                dp[i][j] = min(up, min( leftD, rightD));
            }
        }
        int mini = 1e8;
        for( int i = 0; i < m; i++) {
            mini = min( mini, dp[n-1][i]);
        }
        return mini;
    }
};