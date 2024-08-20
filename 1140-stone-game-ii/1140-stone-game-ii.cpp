class Solution {
public:
    int n;
    int dp[2][101][101];
    int solveForAlice( vector<int>& piles, int person, int i, int M){
        if( i >= n ){
            return 0;
        }
        if( dp[person][i][M] != -1 ){
            return dp[person][i][M];
        }
        int result = (person == 1) ? -1:INT_MAX;

        int stones = 0;

        for( int x = 1; x <= min( 2*M, n-i); x++ ){
            stones += piles[i+x-1];

            if( person == 1 ){//Alice
                result = max( result, stones + solveForAlice( piles, 0, i+1, max(x, M)));
            }else{//Bob
                result = min( result, solveForAlice(piles, 1, i+x, max(x, M)));
            }
        }
        return dp[person][i][M] = result;
    }
    int stoneGameII(vector<int>& piles) {
        n = piles.size();
        memset( dp, -1, sizeof(dp));
        return solveForAlice( piles, 1, 0, 1); //( piles, person, index, M)
    }
};