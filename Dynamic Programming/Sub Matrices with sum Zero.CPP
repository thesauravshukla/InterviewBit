int helper(vector <int> arr)
{
    unordered_map<int,int> seen;
    seen[0]++;
    int curr=0,ans=0;
    for(int i=0;i<arr.size();i++)
    {
        curr+=arr[i];
        ans+=seen[curr];
        seen[curr]++;
    }
    return ans;
}
int Solution::solve(vector<vector<int> > &A) 
{
    if(A.size()==0)
        return 0;
    int s = A[0].size();
    int ans=0;
    
    for(int i=0;i<A.size();i++)
    {
        vector <int> temp(s,0);
        for(int j=i;j<A.size();j++)
        {
            for(int k=0;k<A[j].size();k++)
            {
                temp[k]+=A[j][k];
            }
            ans+=helper(temp);
        }
    }
    return ans;
}
