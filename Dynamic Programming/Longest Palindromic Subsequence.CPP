int Solution::solve(string A) 
{
    vector<vector<int>> dp(A.size(), vector <int> (A.size()));
    for(int i=0;i<A.size();i++)
    {
        dp[i][i] = 1;
    }    
    for(int i=0;i<A.size()-1;i++)
    {
        dp[i][i+1]  = (A[i]==A[i+1])+1;
    }
    for(int offset=2;offset<A.size();offset++)
    {
        for(int i=0;i+offset<A.size();i++)
        {
            if(A[i] == A[i+offset])
            {
                dp[i][i+offset] = 2+dp[i+1][i+offset-1];
            }
            else
                dp[i][i+offset] = max(dp[i+1][i+offset],dp[i][i+offset-1]);
        }
    }
    return dp[0][dp[0].size()-1];
    
}
