class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxm = INT_MIN;
        for( auto it:nums ){
            mp[it]++;
            maxm = max(maxm, mp[it]);
        }

        if( maxm == 1 ) return mp.size();
        int count = 0;
        for( auto it:mp ){
            if( it.second == maxm ){
                count += maxm;
            }
        }
        return count;
    }
};