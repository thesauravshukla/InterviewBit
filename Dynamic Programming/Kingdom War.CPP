int Solution::solve(vector<vector<int> > &A) 
{
    vector <vector <int>> dp(A.size(), vector <int> (A[0].size()));
    int ans=INT_MIN;
    for(int i=0;i<dp.size();i++)
    {
        for(int j=0;j<dp[0].size();j++)
        {
            dp[i][j] = 0;
        }
    }
    for(int i=dp.size()-1;i>=0;i--)
    {
        for(int j=dp[0].size()-1;j>=0;j--)
        {
            {
                dp[i][j] += A[i][j];
            }
            if(i<dp.size()-1)
            {
                dp[i][j] += dp[i+1][j];
            }
            if(j<dp[0].size()-1)
            {
                dp[i][j] += dp[i][j+1];
            }
            if(i<dp.size()-1 && j<dp[0].size()-1)
            {
                dp[i][j] -= dp[i+1][j+1];
            }
            ans = max(ans,dp[i][j]);    
        }
    }
    return ans;
}
