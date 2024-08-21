class Solution {
public:
    void shorten(string& s, int& n){
        int sz=s.size();
        n=1;
        // Use 2 pointer to remove successive duplicates
        char cur;
        for(int l=0, r=1; r<sz; r++){
            cur=s[r];
            while(l<r && s[l]==cur) l++;
            if (r<sz && s[l]!=cur){
                s[n++]=s[r];
                l=r;
            }
        }
        s.resize(n);// s is shortened
    //    cout<<s<<endl;
    }

    int dp[101][101];
    int f(int i, int j, string& s){
        if (dp[i][j]!=-1) return dp[i][j];
        if (i==j) return dp[i][j]=1;// base case
        if (s[i]==s[j]) return f(i, j-1, s);
        int ans=f(i, j-1, s)+1;
        for(int k=i+1; k<j-1; k++){// s[j-1]!=s[j]
            if (s[k]==s[j])
                ans=min(ans, f(i, k-1, s)+f(k, j-1, s));
        }
        return dp[i][j]=ans;
    }
    int strangePrinter(string& s) {
        int n;
        shorten(s, n);
    //    cout<<n<<", shorten s="<<s<<endl;
        memset(dp, -1, sizeof(dp));
        return f(0, n-1, s);
    }
};