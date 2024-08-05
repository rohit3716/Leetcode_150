class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for( auto str:arr ){
            mp[str]++;
        }

        for( auto it:arr ){
           if( mp[it] == 1 ){
            --k;
            if( k == 0 ){
                return it;
            }
           }
        }
        return "";
    }
};