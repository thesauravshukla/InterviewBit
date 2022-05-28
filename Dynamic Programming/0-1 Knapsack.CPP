int Solution::solve(vector<int> &A, vector<int> &B, int C) 
{
    vector <vector <int>> dp(C+1, vector <int> (A.size()));
    for(int i=0;i<A.size();i++)
        dp[0][i] = 0;
    for(int i=1;i<=C;i++)
    {
        if(i<B[0])
            dp[i][0] = 0;
        else
            dp[i][0] = A[0];
    }
    for(int i=1;i<dp.size();i++)
    {
        for(int j=1;j<dp[i].size();j++)
        {
            dp[i][j] = max(A[j]+dp[max(0,i-B[j])][j-1], dp[i][j-1]);
        }
    }
    return dp[dp.size()-1][dp[0].size()-1];
}
