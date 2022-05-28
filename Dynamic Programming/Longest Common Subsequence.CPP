int Solution::solve(string A, string B) 
{
    vector<vector<int>>dp(A.size(), vector <int> (B.size()));
    dp[0][0] = (A[0] == B[0]);
    for(int i=1;i<A.size();i++)
    {
        dp[i][0] = ((A[i]==B[0])||(dp[i-1][0])) ;
    }
    for(int i=1;i<B.size();i++)
    {
        dp[0][i] = ((B[i]==A[0])||(dp[0][i-1]));
    }
    for(int i=1;i<A.size();i++)
    {
        for(int j=1;j<B.size();j++)
        {
            if(A[i]==B[j])
                dp[i][j] = max(1+dp[i-1][j-1],dp[i][j-1]);
            else
                dp[i][j] = dp[i][j-1];
        }
    }
    return dp[dp.size()-1][dp[0].size()-1];
}
