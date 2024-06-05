class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> ans(26, INT_MAX);
        for( auto word:words ){
            vector<int> freq(26, 0);
            for( auto ch:word ){
                freq[ch-'a']++;
            }
            for( int i = 0; i < 26; i++ ){
                ans[i] = min(ans[i], freq[i]);
            }
        }
        vector<string> result;
        for( int i = 0; i < 26; i++ ){
            while( ans[i]-- ){
                result.push_back(string(1, i+'a'));
            }
        }
        return result;
    }
};