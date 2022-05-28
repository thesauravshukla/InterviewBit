int Solution::numDistinct(string A, string B) 
{
     vector <vector <unsigned long long int>> dp(A.size()+1, vector <unsigned long long int>(B.size()+1,0));
        for(int i=0;i<=A.size();i++)
        {
            dp[i][0] = 1;
        }
        for(long long int i=1;i<=A.size();i++)
        {
            for(long long int j=1;j<=B.size();j++)
            {
                if(A[i-1]!=B[j-1])
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }
        return dp[dp.size()-1][dp[0].size()-1];
}
