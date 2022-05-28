int Solution::solve(vector<int> &A) 
{
    int t=0;
    for(int i=0;i<A.size();i++)
    {
        t += A[i];
    }
    int s=t;
    t=t/2;
    vector <vector <int>> dp(A.size(), vector <int> (t+1));
    for(int i=0;i<dp[0].size();i++)
    {
        if(A[0]<=i)
            dp[0][i] = A[0];
        else
            dp[0][i] = 0;
    }
    for(int i=0;i<dp.size();i++)
    {
        dp[i][0] = 0;
    }
    for(int i=1;i<dp.size();i++)
    {
        for(int j=1;j<dp[i].size();j++)
        {
            if(A[i]<=j)
            {
                dp[i][j] = max(A[i]+dp[i-1][j-A[i]], dp[i-1][j]);
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
            
        }
    }
    return s-2*dp[dp.size()-1][dp[0].size()-1];
}
