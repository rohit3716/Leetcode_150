class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        long long int num = 1;
        int count = 0;
        for( int i = 0; i < n; i++) {
            
            if( nums[i] == 0 ) {
                count++;
                if( count >= 2 ){
                    break;
                }
                continue;
            }    
            num *= nums[i];
        }

        if( count >= 2) {
            for( int i = 0; i < n; i++) {
            nums[i] = 0;    
            }
        }
        else if(count == 1){
            for( int i = 0; i < n; i++) {
            if(nums[i] == 0 ){
                nums[i] = num;
            }
            else{
                nums[i] = 0;
            }
            }
        }
        else {
            for( int i = 0; i < n; i++) {
                nums[i] = num/nums[i];
            }
        }
        return nums;
    }
    
};