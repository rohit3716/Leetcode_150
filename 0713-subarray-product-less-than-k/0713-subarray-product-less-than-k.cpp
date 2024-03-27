class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if( k <= 1 ) return 0;
        int i = 0; 
        int j = 0;

        long subArrProd = 1;

        int cnt = 0;
        while( j < nums.size() ){
            subArrProd *= nums[j];
            while( subArrProd >= k ){
                subArrProd /= nums[i];
                i++;
            }
            cnt += (j-i+1);
            j++;
        }

        return cnt;
    }
};