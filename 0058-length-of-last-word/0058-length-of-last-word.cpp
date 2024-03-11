class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = s.size()-1;
        int lastWordCount = 0;
        bool flag = false;

        for( int i = j; i >= 0; i-- ){
            if( s[i] == ' ' && flag ){
                break;
            }
            if( s[i] != ' ' ){
                lastWordCount++;
                flag = true;
            }
        }
        return lastWordCount;
    }
};