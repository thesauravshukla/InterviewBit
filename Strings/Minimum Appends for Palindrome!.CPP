int Solution::solve(string A) 
{
    int l=0,r=A.size()-1,ans=0,curr=0;
    while(l<=r)
    {
        if(A[l]!=A[r])
        {
            r=A.size()-1;
            curr++;
            l=curr;
        }
        else
        {
            l++;
            r--;
        }
    }
    return curr;
        
}
