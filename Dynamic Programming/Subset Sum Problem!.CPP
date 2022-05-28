int Solution::solve(vector<int> &A, int B) 
{
    vector <vector <bool>> dp(A.size()+1, vector <bool> (B+1));
    for(int i=0;i<=B;i++)
        dp[0][i] = false;
    for(int i=0;i<=A.size();i++)
        dp[i][0] = true;
    for(int i=1;i<dp.size();i++)
    {
        for(int j=1;j<dp[0].size();j++)
        {
            if(j-A[i-1]<0)
                dp[i][j] = dp[i-1][j];
            else
            {
                dp[i][j] = (dp[i-1][j]||dp[i][j-A[i-1]]);
            }
        }
    }
    return dp[dp.size()-1][dp[0].size()-1];
    
}
