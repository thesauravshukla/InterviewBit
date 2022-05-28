int Solution::solve(vector<vector<int> > &A) 
{
    vector <vector<int>> dp(A.size(), vector <int>(A[0].size()));
    for(int i=0;i<A[0].size();i++)
    {
        dp[A.size()-1][i] = A[A.size()-1][i]; 
    }
    for(int i=A.size()-2;i>=0;i--)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if(j<A[0].size()-1)
                dp[i][j] = A[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
            else
                dp[i][j] = A[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<A[0].size();i++)
        ans=max(ans,dp[0][i]);
    return ans;
    
}
