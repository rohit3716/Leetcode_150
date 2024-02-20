class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int actualSum = n*(n+1)/2;

       int sum = 0;
       for( int i = 0; i < n; i++ ){
           if( nums[i] != 0 ) sum += nums[i];
       }

       return actualSum-sum;
       
    }
};