class Solution {
    public long largestPerimeter(int[] nums) {
        Arrays.sort(nums);
        long perimeter = 0, sum = nums[0]+nums[1];

        int n = nums.length;

        for( int i = 2; i < n; i++ ){
            if( sum > nums[i] ){
                perimeter = sum+nums[i];
            }
            sum += nums[i];
        }
        return perimeter==0 ? -1:perimeter;
    }
}