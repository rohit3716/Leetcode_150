class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        long long product = 1;
        int zero = 0;
        for( int i = 0; i < n; i++) {
            
            if( nums[i] == 0 ) {
                zero++;
                if( zero == 2 ) break;
                continue;
            }    
            product *= nums[i];
        }

        for( int i = 0; i < n; i++ ){
            if( zero == 2 ){
                nums[i] = 0;
            }
            else if( zero == 1 ){
                if( nums[i] == 0 ){
                    nums[i] = product;
                }else{
                    nums[i] = 0;
                }
            }else{
                nums[i] = product/nums[i];
            }
        }
        return nums;
    }
    
};