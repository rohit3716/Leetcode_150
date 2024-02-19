class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<long, long> mp;
        int i = 0;

        long long sum = 0;
        long long maxSum = INT_MIN;
        while ( i < k && i < nums.size() ) {
            mp[nums[i]]++;
            sum += nums[i];
            i++;
        }
        if( mp.size() == k ) maxSum = sum; 
        while( i < nums.size() ){
            mp[nums[i]]++;
            mp[nums[i-k]]--;

            if( mp[nums[i-k]] == 0 ) mp.erase(nums[i-k]);

            sum += nums[i];
            sum -= nums[i-k];

            if( mp.size() == k ) maxSum = max(maxSum, sum);
            i++;
        }

        return maxSum == INT_MIN ? 0 : maxSum;
    }
};