class Solution {
public:
    int dp[1001][1001];
    int solve( int currA, int clipA, int n){
        if( currA == n ){
            return 0;
        }

        if( currA > n ){
            return 100000;
        }
        
        if( dp[currA][clipA] != -1 ){
            return dp[currA][clipA];
        }

        int copyAndPaste = 1 + 1 + solve( currA+currA, currA, n);
        int paste = 1 + solve( currA+clipA, clipA, n);
        
        return dp[currA][clipA] = min(copyAndPaste, paste);
    }
    int minSteps(int n) {
       if( n == 1 ){
        return 0;
       } 
        memset(dp, -1, sizeof(dp));
       return 1 + solve( 1, 1, n); //currA, clipA, n
    }
};