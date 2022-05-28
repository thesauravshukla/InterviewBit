int Solution::solve(vector<vector<int> > &A) 
{
    vector <int> lis(A.size(),1);
    for(int i=1;i<A.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(A[j][1]<A[i][0])
            {
                lis[i] = max(lis[i],1+lis[j]);
            }
        }
    }
    int ans=0;
    for(int i=0;i<lis.size();i++)
        ans = max(ans,lis[i]);
    return ans;
}
