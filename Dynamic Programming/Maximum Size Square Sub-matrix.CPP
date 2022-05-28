int Solution::solve(vector<vector<int> > &A) 
{
    vector <vector <int>> dp(A.size(), vector <int> (A[0].size()));
    int maxi=0;
    for(int i=0;i<A[0].size();i++)
    {
        dp[0][i] = A[0][i];
        maxi=max(maxi,dp[0][i]);
    }
    for(int i=0;i<A.size();i++)
    {
        dp[i][0] = A[i][0];
        maxi=max(maxi,dp[i][0]);
    }
    for(int i=1;i<A.size();i++)
    {
        for(int j=1;j<A[0].size();j++)
        {
            if(A[i][j]==1)
            {
                dp[i][j] = 1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
            }
            maxi=max(maxi,dp[i][j]);
        }
    }
    return maxi*maxi;
    
}
