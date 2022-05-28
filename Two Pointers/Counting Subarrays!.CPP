int Solution::solve(vector<int> &A, int B) 
{
    int l=0,r=0,curr=0;
    int ans=0;
    if(B==0)
    {
        int l=A.size();
        return l*(l+1)/2;
    }
    while(r<A.size())
    {
        if(curr+A[r] < B)
        {
            curr+=A[r++];
        }
        else
        {
            ans+=r-l;
            curr-=A[l++];
        }
    }
    ans+=(r-l)*(r-l+1)/2;
    return ans;
    
}
