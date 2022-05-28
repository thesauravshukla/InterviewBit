int Solution::solve(vector<int> &A, int B) 
{
    int curr=0;
    unordered_map <int,int> count;
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        curr = curr^A[i];
        if(curr==B)
            ans++;
        ans+=count[curr^B];
        count[curr]++;
    }
    return ans;
    
    
}
