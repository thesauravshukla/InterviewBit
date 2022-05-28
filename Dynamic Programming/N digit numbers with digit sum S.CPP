int Solution::solve(int A, int B) 
{
    vector <vector <int>> dp(A+1, vector <int> (B+1));
    dp[0][0] = 0;
    for(int j=1;j<dp[0].size();j++)
    {
            dp[1][j] = j<=9;
    }
    for(int i=2;i<dp.size();i++)
    {
        for(int j=1;j<dp[i].size();j++)
        {
            int temp=0;
            for(int k=0;k<=9&&(j-k>=0);k++)
            {
                temp += dp[i-1][j-k];
                temp%=(int)1000000007;
            }
            dp[i][j] = temp;
        }
    }
    return dp[dp.size()-1][dp[0].size()-1]%1000000007;
    
}