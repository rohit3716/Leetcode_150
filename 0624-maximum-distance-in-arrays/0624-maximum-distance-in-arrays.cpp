class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int result = INT_MIN;
        int minm = arrays[0][0];
        int maxm = arrays[0][arrays[0].size()-1];
        for( int i = 1; i < arrays.size(); i++ ){
            int curMax = arrays[i].back();
            int curMin = arrays[i][0];

            int diff1 = abs(curMax-minm);
            int diff2 = abs(curMin-maxm);
            
            result = max(diff1, diff2);
            maxm = max( maxm, curMax);
            minm = min( minm, curMin);
        }
        return result;
    }
};