int Solution::solve(vector<int> &stones) 
{
    int k=2;
    if((stones.size()-1)%(k-1) != 0)
        return -1;
    vector<vector<int>> dp(stones.size(), vector <int> (stones.size()));
    
    for(int i=0;i<dp.size();i++)
    {
        for(int j=0;j<dp[i].size();j++)
            dp[i][j] = 0;
    }
    vector <int> rangesum(stones.size()+1);
    rangesum[0] = 0;
    for(int i=0;i<stones.size();i++)
    {
        rangesum[i+1] = rangesum[i]+stones[i];
    }
    for(int offset=0;offset<stones.size();offset++)
    {
        for(int i=0;i+offset<stones.size();i++)
        {
            if(offset<k-1)
                dp[i][i+offset] = 0;
            else if(offset==k-1)
                dp[i][i+offset] = rangesum[i+offset+1]-rangesum[i];
            else
            {
                dp[i][i+offset]=INT_MAX;
                for(int breakpoint=i;breakpoint<i+offset;breakpoint+=(k-1))
                {
                    dp[i][i+offset]= min(dp[i][i+offset], dp[i][breakpoint]+dp[breakpoint+1][i+offset]);
                    }
                if(offset%(k-1) == 0)
                {
                    dp[i][i+offset] += rangesum[i+offset+1]-rangesum[i];
                }
            }
        }
    }
    if(dp[0][stones.size()-1]==INT_MAX)
        return -1;
    return dp[0][stones.size()-1];
}


