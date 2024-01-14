class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> maps;
        int step = 0;
        for( int i = 0; i < s.size(); i++ ){
            maps[s[i]]++;
            maps[t[i]]--;
        }

        // for( int i = 0; i < t.size(); i++){
            
        // }

        for( auto val:maps ){
            if( val.second < 0 ){
                step += abs(val.second);
            }
        }
        return step;
    }
};