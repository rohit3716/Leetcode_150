class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> mp;
        for( auto it:target ){
            mp[it]++;
        }

        for( auto it:arr ){
            if( mp[it] ){
                mp[it]--;
            }else{
                mp[it]++;
            }
        }

        for( auto i:mp ){
            if( i.second > 0 ){
                return false;
            }
        }
        return true;
    }
};