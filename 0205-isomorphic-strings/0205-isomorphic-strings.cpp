class Solution {
public:
    bool isIsomorphic(string s, string t) {
     unordered_map<char,char> mp1;
         unordered_map<char,char> mp2;
         int i,j;
         if(s.size()!=t.size())
            return 0;
         for(i=0;i<s.size();){
             if((mp1[s[i]] && mp1[s[i]]!=t[i]) || (mp2[t[i]] && mp2[t[i]]!=s[i])){
                    return 0;
             } 
             else  {
                mp1[s[i]]=t[i];
                mp2[t[i]]=s[i];
                i++;
             }
         }
         return 1;    }
};