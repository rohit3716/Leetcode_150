class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> fr1(26, 0);
        vector<int> fr2(26, 0);

        for( auto ch:word1 ){
            fr1[ch-'a']++;
        }
        for( auto ch:word2 ){
            fr2[ch-'a']++;
        }

        for( int i = 0; i < 26; i++ ){
            if((fr1[i] == 0 && fr2[i] != 0 ) || (fr1[i] != 0 && fr2[i] == 0 ))
                return false;
        }

        sort( fr1.begin(), fr1.end() );
        sort( fr2.begin(), fr2.end() );

        for( int i = 0; i < 26; i++ ){
            if( fr1[i] != fr2[i] )
                return false;
        }
        return true;
    }
};