  bool dfs(int p1, int p2, int p3, unordered_map <string,bool> &seen, unordered_map<string,bool> &precalculated, string &s1, string &s2, string &s3)
    {
        string temp = "";
        temp += ('0'+p1);
        temp += '*';
        temp += ('0'+p2);
        temp+='*';
        temp+=('0'+p3);
        if(seen[temp])
        {
            return precalculated[temp];
        }
            
        else
        {
            if(p1==s1.size() && p2==s2.size() && p3==s3.size())
            {
                seen[temp] = true;
                precalculated[temp] = true;
                return true;
            }
            if(p1<s1.size() && s1[p1]==s3[p3]&& p2<s2.size() && s2[p2]==s3[p3])
            {
                seen[temp] = true;
                precalculated[temp] = dfs(p1+1,p2,p3+1,seen,precalculated,s1,s2,s3)||dfs(p1,p2+1,p3+1,seen,precalculated,s1,s2,s3);
                return precalculated[temp];
            }
            if(p1<s1.size() && s1[p1]!=s3[p3] && p2<s2.size() && s2[p2]!=s3[p3])
            {
                seen[temp] = true;
                precalculated[temp] = false;
                return precalculated[temp];
            }
            if(p1<s1.size() && s1[p1]==s3[p3]&& (p2>=s2.size() || s2[p2]!=s3[p3]))
            {
                seen[temp] = true;
                precalculated[temp] = dfs(p1+1,p2,p3+1,seen,precalculated,s1,s2,s3);
                return precalculated[temp];
            }
            if(p2<s2.size() && s2[p2]==s3[p3]&& (p1>=s1.size() || s1[p1]!=s3[p3]))
            {
                seen[temp] = true;
                precalculated[temp] = dfs(p1,p2+1,p3+1,seen,precalculated,s1,s2,s3);
                return precalculated[temp];
            }
        }
        return false;
    }
int Solution::isInterleave(string A, string B, string C) 
{
    int p1=0,p2=0,p3=0;
    unordered_map <string,bool> seen;
    unordered_map<string,bool> precalculated;
    return dfs(p1,p2,p3,seen,precalculated,A,B,C);
    
}
