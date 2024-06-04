class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        int ans = 0;

        set<char> mp;
        for( auto ch:s ){
            if( mp.find(ch) != mp.end() ){
                mp.erase(ch);
                ans += 2;
            }
            else{
                mp.insert(ch);
            }
        }

        if( !mp.empty() ){
            ans += 1;
        }

        return ans;
        
    }
};