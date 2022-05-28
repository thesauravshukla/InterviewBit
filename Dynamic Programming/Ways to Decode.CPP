int Solution::numDecodings(string A) 
{
    if(A[0] == '0')
        return 0;
    vector <int> temp;
    for(int i=0;i<A.size();i++)
        temp.push_back(A[i]-'0');
    vector <int> dp(A.size()+1);
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<dp.size();i++)
    {
        if((temp[i-1]==0)&&((temp[i-2]!=1)&&(temp[i-2]!=2)))
            return 0;
        else if((temp[i-1]<=6)&&(temp[i-1]>0)&&(temp[i-2]>0)&&(temp[i-2]<=2))
            dp[i] = dp[i-1]+dp[i-2];
        else
            dp[i] = dp[i-1];
        dp[i]=dp[i]%1000000007;
    }
    
    return dp[dp.size()-1];
    
}
