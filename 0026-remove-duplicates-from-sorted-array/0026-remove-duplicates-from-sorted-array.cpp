class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int i , j = 0;
     for( i = 0; i < nums.size(); i++) {
         if( nums[j] != nums[i]){
             j++;
             nums[j] = nums[i];
         }
     }
     return j+1;
    }
};