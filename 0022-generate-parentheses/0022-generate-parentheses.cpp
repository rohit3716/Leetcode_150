class Solution {
public:
    vector<string> result;
    bool isValid( string& curr){
        int count = 0;

        for( auto ch:curr){
            if( ch == '(' )
                count += 1;
            else
                count -= 1;
            
            if( count < 0 )
                return false;
        }

        return count==0;
    }
    void solve(string& curr, int n){

        if( curr.size() == 2*n ){
            if( isValid(curr) ){
                result.push_back(curr);
            }
            return;
        }

        curr.push_back('(');
        solve( curr, n);
        curr.pop_back();

        curr.push_back(')');
        solve( curr, n);
        curr.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string curr = "";
        solve( curr, n);

        return result;
    }
};