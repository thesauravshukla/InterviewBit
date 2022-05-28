int Solution::solve(const vector<int> &A) 
{
    if(A.size()<=2)
        return A.size();
    vector <unordered_map <int,int>> dp(A.size());
    int maxi=0;
    for(int i=0;i<A.size();i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            int diff = A[j]-A[i];
            if(dp[i].find(diff)!=dp[i].end())
            {
                dp[j][diff] = 1+ dp[i][diff];
            }
            else
            {
                dp[i][diff] = 2;
            }
            maxi=max(maxi,dp[j][diff]);
        }   
    }
    return maxi;
    
}
