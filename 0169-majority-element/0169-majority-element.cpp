class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int cnt = 0;
        for( int i = 0; i < nums.size(); i++ ){
            if( cnt == 0 ){
                cnt = 1;
                el = nums[i];
            }
            else if( el == nums[i] ){
                cnt++;
            } 
            else{
                cnt--;
            }
        }

        int cnt1 = 0;
        for( int i = 0; i < nums.size(); i++ ){
            if( el == nums[i] ) cnt1++;
        }

        if( cnt1 >= (nums.size()/2) ) return el;
        else return -1;
    }
};