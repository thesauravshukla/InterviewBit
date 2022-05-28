int Solution::isMatch(const string s, const string p) 
{
    vector <vector <bool>> dp(s.size()+1, vector <bool> (p.size()+1));
    
        dp[0][0] = true;
        for(int i=1;i<dp.size();i++)
        {
            dp[i][0] = false;
        }
        for(int i=1;i<dp[0].size();i++)
        {
            if(p[i-1]=='*')
            {
                dp[0][i] = dp[0][i-1];
            }
            else
            {
                dp[0][i] = false;
            }
        }
        for(int i=1;i<dp.size();i++)
        {
            for(int j=1;j<dp[i].size();j++)
            {
                if((p[j-1]==s[i-1])||(p[j-1]=='?'))
                {
                    dp[i][j] = dp[i-1][j-1];
                }
                else if(p[j-1]=='*')
                {
                    dp[i][j] = dp[i][j-1]||dp[i-1][j];
                }
                else
                {
                    dp[i][j] = false;
                }
            }
        }
        return dp[dp.size()-1][dp[0].size()-1];
    
}
