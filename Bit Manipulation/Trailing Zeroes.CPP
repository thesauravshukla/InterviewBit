int Solution::solve(int A) 
{
    int n=1,ans=0;
    while(!(n&A))
    {
        ans++;
        n=n*2;
    }
    return ans;
    
    
}