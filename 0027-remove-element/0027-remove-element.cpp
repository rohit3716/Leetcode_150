class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();

        int size = 0;
        for( int i = 0; i < n; i++ ) {
            if( nums[i] == val ) {
                continue;
            }
            else{
                nums[size++] = nums[i];
            }
        }
        return size;
    }
};