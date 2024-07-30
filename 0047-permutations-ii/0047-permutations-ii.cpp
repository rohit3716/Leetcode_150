class Solution {
public:
    vector<vector<int>> result;
    int n;
    void solve( vector<int> &temp, unordered_map<int, int>& mp){

        if( temp.size() == n ){
            result.push_back(temp);
            return;
        }

        for( auto& [num, count]:mp ){
            if( count == 0 ) continue;
            
            //Do something
            temp.push_back(num);
            mp[num]--;

            //Explore
            solve(temp, mp);

            //Backtrack
            mp[num]++;
            temp.pop_back();
        }

    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n = nums.size();
        unordered_map<int, int> mp;

        for( int it:nums ){
            mp[it]++;
        }

        vector<int> temp;

        solve( temp, mp);

        return result;
    }
};