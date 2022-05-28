int Solution::minCut(string A) 
{
         vector <vector <int>> dp(A.size(), vector <int> (A.size()));
    for(int i=0;i<A.size();i++)
    {
        dp[i][i] = 0;
    }
    for(int i=0;i<A.size()-1;i++)
    {
        if(A[i]==A[i+1])
            dp[i][i+1] = 0;
        else
            dp[i][i+1] = 1;
    }
    for(int offset=2;offset<A.size();offset++)
    {
        for(int i=0;i+offset<A.size();i++)
        {
            if((A[i]==A[i+offset])&&(!dp[i+1][i+offset-1]))
               dp[i][i+offset] = 0;
            else
            {
                int mini=INT_MAX;
                for(int k=i;k<i+offset;k++)
                {
                    mini = min(mini, 1+dp[i][k]+dp[k+1][i+offset]);
                }
                dp[i][i+offset] = mini;
            }
        }
    }
    return dp[0][A.size()-1];    
}
