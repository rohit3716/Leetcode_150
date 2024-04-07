class Solution {
public:
    bool checkValidString(string s) {
        stack<char> bracketSt, asteriskSt;

        for( auto ch:s ){
            if( ch == '('){
                bracketSt.push(ch);
            }
            else if( ch == ')'){
                if( !bracketSt.empty() ){
                    bracketSt.pop();
                }
                else if( !asteriskSt.empty() ){
                    asteriskSt.pop();
                }
                else{
                    return false;
                }
            }
            else{
                asteriskSt.push(ch);
            }
        }

        while( !bracketSt.empty() && !asteriskSt.empty() ){
            if( bracketSt.top() > asteriskSt.top() ){
                return false;
            }
            bracketSt.pop();
            asteriskSt.pop();
        }
        return bracketSt.empty();
    }
};