int Solution::minDistance(string A, string B) 
{
    vector <vector <int>> dp(A.size()+1, vector <int> (B.size()+1));
    dp[0][0] = 0;
    for(int i=1;i<dp.size();i++)
    {
        dp[i][0] = dp[i-1][0]+1;
    }
    for(int i=1;i<dp[0].size();i++)
    {
        dp[0][i] = dp[0][i-1]+1;
    }
    for(int i=1;i<=A.size();i++)
    {
        for(int j=1;j<=B.size();j++)
        {
            if(A[i-1] == B[j-1])
            {
                dp[i][j] = dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = min(1+dp[i][j-1],min(1+dp[i-1][j],1+dp[i-1][j-1]));
            }
        }
    }
    return dp[A.size()][B.size()];
}
