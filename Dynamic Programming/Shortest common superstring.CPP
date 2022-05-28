    string dfs(int cur, int all, vector<string>& A, vector<vector<int>> &overlap, vector<vector<string>> &dp){
        if(!dp[all][cur].empty())
        {
            return dp[all][cur];
        }
        
        int pre=all^(1<<cur);
        if(pre==0){
            return dp[all][cur]=A[cur];
        }
        for(int i=0;i<A.size();++i)
        {
            if((pre&(1<<i))!=0)
            {
                string tmp=dfs(i,pre,A,overlap,dp)+A[cur].substr(overlap[i][cur]);
                if(dp[all][cur].empty() || tmp.size()<dp[all][cur].size())
                {
                    dp[all][cur]=tmp;
                }
            }
        }
int Solution::solve(vector<string> &A) 
{
    int N=A.size();
        vector<vector<string>> dp(1<<N,vector<string>(N));
        vector<vector<int>> overlap(N,vector<int>(N,0));
        for(int i=0;i<N;++i)
        {
            for(int j=0;j<N;++j)
            {
                if(i!=j)
                {
                    for(int k=min(A[i].size(),A[j].size());k>=0;--k)
                    {
                        if(A[i].substr(A[i].size()-k)==A[j].substr(0,k))
                        {
                            overlap[i][j]=k;
                            break;
                        }
                    }
                }
            }
        }
        for(int i=0;i<N;++i)
        {
            dfs(i,(1<<N)-1,A,overlap,dp);
        }        
        int all=(1<<N)-1;
        string res=dp[all][0];
        for(int i=1;i<N;++i)
        {
            if(dp[all][i].size()<res.size())
            {
                res=dp[all][i];
            }
        }
        return res;
    } 
        return dp[all][cur].size();    
}
