class Solution {
public:
    int solve( vector<int> temp, int n ) {
        int prev = temp[0];
        int prev2 = 0;

        for( int i = 1; i < n; i++) {
            int pick = temp[i];
            if( i > 1) pick += prev2;
            int nonPick = 0 + prev;
            int curr = max( pick, nonPick);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if( n == 1 ) return nums[0];
        vector<int> temp1;
        vector<int> temp2;
        for( int i = 0; i < n; i++) {
            if( i != 0 ) temp1.push_back(nums[i]);
            if( i != n-1 ) temp2.push_back(nums[i]);
        }

        return max( solve(temp1, temp1.size()), solve( temp2, temp2.size()) );
    }
};