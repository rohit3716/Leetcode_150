class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end() );
        int n = nums.size();

        long long perimeter = 0, sum = nums[0]+nums[1];

        for( int i = 2; i < n; i++ ){
            if( sum > nums[i] ){
                perimeter = sum+nums[i];
            }
            sum += nums[i];
        }

        return perimeter==0 ? -1:perimeter;
    }
};