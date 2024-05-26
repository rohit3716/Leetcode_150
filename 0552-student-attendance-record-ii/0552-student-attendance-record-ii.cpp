class Solution {
public:
int M = 1e9+7;
   int dp[100001][2][3];
    int solve( int n, int abs, int cons){
        if( abs >= 2 || cons >= 3 ) return 0;
        if( n == 0 ) return 1;

        if( dp[n][abs][cons] != -1 ) return dp[n][abs][cons];

        int A = solve( n-1, abs+1, 0);
        int C = solve( n-1, abs, cons+1);
        int P = solve( n-1, abs, 0);

        return dp[n][abs][cons] = (((A+C)%M + P )%M);
    }
    int checkRecord(int n) {
        memset(dp, -1, sizeof(dp));
        return solve( n, 0, 0);
    }
};