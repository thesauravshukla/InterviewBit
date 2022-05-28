int Solution::coinchange2(vector<int> &A, int B) 
{
    vector <long long int> dp(B+1,0);
    dp[0] = 1;
    for(long long int i=0;i<A.size();i++)
    {
        for(long long int j=A[i];j<dp.size();j++)
        {
            dp[j]+=dp[j-A[i]]%1000007;
        }
    }
    return dp[dp.size()-1]%1000007;
    
}
