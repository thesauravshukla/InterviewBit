int Solution::solve(vector<int> &A, int B) 
{
    int n = A.size();
    B = min(B,n/2);
    vector <vector <int>> dp(B+1, vector <int> (A.size()));
    for(int i=0;i<dp.size();i++)
        dp[i][0] = 0;
    for(int i=0;i<dp[0].size();i++)
        dp[0][i] = 0;
    for(int i=1;i<dp.size();i++)
    {
        for(int j=1;j<dp[0].size();j++)
        {
            int maxi=0;
            for(int k=0;k<j;k++)
            {
                maxi = max(A[j]-A[k] + dp[i-1][k], maxi);
            }
            dp[i][j] = max(maxi,dp[i][j-1]);
        }
    }
    return dp[dp.size()-1][dp[0].size()-1];
    
}
