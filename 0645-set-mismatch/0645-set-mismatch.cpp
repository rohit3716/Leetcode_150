class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int actSum = n*(n+1)/2;

        set<int> st(nums.begin(), nums.end());

        int arrSum = 0;
        int uniSum = 0;

        for( auto a:nums ){
            arrSum += a;
        }

        for( auto s:st ){
            uniSum += s;
        }

        int missing = actSum - uniSum;
        int dup = arrSum-uniSum;

        return {dup, missing};
    }
};