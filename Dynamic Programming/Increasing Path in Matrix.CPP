int Solution::solve(vector<vector<int> > &A) 
{
    vector <vector <int>> dp(A.size(), vector <int> (A[0].size()));
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
            dp[i][j] = 0;
    }
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if((j<A[0].size()-1)&&(A[i][j+1]>A[i][j])&&((!i&&!j)||(dp[i][j]!=0)))
                dp[i][j+1] = max(dp[i][j+1],1+dp[i][j]);
            if((i<A.size()-1)&&(A[i+1][j]>A[i][j])&&((!i&&!j)||(dp[i][j]!=0)))
                dp[i+1][j] = max(dp[i+1][j],1+dp[i][j]);
        }
    }
    if(dp[dp.size()-1][dp[0].size()-1]==0)
        return -1;
    return dp[A.size()-1][A[0].size()-1];
}
