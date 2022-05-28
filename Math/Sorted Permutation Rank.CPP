int findPos(string s, int start, int end, char c)
{
    int count=0;
    for(int i=start;i<end;i++)
    {
        if(s[i]<c)
        {
            count++;
        }
    }
    return count;
}
long long int fact(int n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}
int Solution::findRank(string A) 
{
    long long int ans=0;
    for(long long int i=0;i<A.size();i++)
    {
        long long int count = findPos(A,i,A.size(),A[i]);
        // cout<<count<<" ";
        ans = (ans + (count*fact(A.size()-i-1)))%(1000003);
    }
    return (ans+1)%(1000003);
    
    
}
