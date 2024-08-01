class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for( auto str:details ){
            int tens = str[11]-'0';
            if( tens > 6 ){
                count++;
            }
            else if( tens == 6 ){
                int ones = str[12]-'0';
                if( ones > 0 ){
                    count++;
                }
            } 
        }
        return count;
    }
};