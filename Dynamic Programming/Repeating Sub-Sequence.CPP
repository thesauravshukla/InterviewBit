int Solution::anytwo(string A) 
{
    vector<vector<int>> dp(A.size()+1,vector <int> (A.size()+1));
    for(int i=0;i<=A.size();i++)
    {
        dp[i][0] = 0;
        dp[0][i] = 0;
    }
    for(int i=1;i<=A.size();i++)
    {
        for(int j=1;j<=A.size();j++)
        {
            if(A[i-1] == A[j-1] && i!=j)
            {
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[A.size()][A.size()];  
}
