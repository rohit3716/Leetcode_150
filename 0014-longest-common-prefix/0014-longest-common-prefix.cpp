class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ans = strs[0].size();
        
        for( int i = 1; i < strs.size(); i++ ){
            int j = 0;
            while( j < strs[i].size() && strs[0][j] == strs[i][j] ){
               j++;
            }
            ans = min(ans, j);
        }
        return strs[0].substr(0,ans);
    }
};