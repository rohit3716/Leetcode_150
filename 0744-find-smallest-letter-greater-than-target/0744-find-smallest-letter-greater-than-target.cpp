class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        if( target == 'z') return letters[0];
        int idx = -1;
        for( int i = 0; i < n; i++ ) {
            if( target < letters[i]){
                return letters[i];
            }
        }
        return letters[0];
    }
};