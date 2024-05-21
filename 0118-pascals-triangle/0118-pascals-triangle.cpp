class Solution {
public:
    vector<int> generateRow( int row ){
        long long ans = 1;
        vector<int> num;
        num.push_back(1);

        for( int col = 1; col < row; col++ ){
            ans *= (row-col);
            ans /= col;
            num.push_back(ans);
        }
        return num;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for( int i = 1; i <= numRows; i++ ){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};