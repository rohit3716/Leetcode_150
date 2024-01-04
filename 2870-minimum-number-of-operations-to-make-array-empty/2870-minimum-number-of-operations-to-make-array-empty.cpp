class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int, int> mp;

        for( int i = 0; i < nums.size(); i++ ){
            mp[nums[i]]++;
        }

        int ans = 0;
        for( auto i:mp ){
            if( i.second == 1 )  return -1;

            if( (i.second%3) == 0 )
            ans +=  (i.second/3);
            else
            ans += ((i.second)/3)+1;
        }
        return ans;
    }
};