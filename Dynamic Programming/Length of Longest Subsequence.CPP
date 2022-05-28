int Solution::longestSubsequenceLength(const vector<int> &A) 
{
    vector <int> lis(A.size(),1);
    vector <int> lds(A.size(),1);
    for(int i=1;i<A.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(A[i]>A[j])
            {
                lis[i] = max(lis[i],1+lis[j]);
            }
        }
    }
    for(int i=A.size()-2;i>=0;i--)
    {
        for(int j=A.size()-1;j>i;j--)
        {
            if(A[i]>A[j])
                lds[i] = max(lds[i],1+lds[j]);
        }
    }
    int ans=0;
    for(int i=0;i<lis.size();i++)
    {
        ans = max(lis[i]+lds[i]-1, ans);
    }
    return ans;
    
}
