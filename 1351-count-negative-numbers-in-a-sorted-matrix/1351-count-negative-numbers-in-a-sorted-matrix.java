class Solution {
    public int countNegatives(int[][] grid) {
        int m = grid[0].length;
        int n = grid.length;

        int negNo = 0;  
        for ( int i = 0; i < n; i++ ){
            for( int j = 0; j < m; j++ ){
                if( grid[i][j] < 0) {
                    negNo += (m-j);
                    break;
                }
            }
        }
        return negNo;
    }
}