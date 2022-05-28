int Solution::titleToNumber(string A) 
{
    long long int ans=0;
    int s=A.size();
    for(int i=0;i<A.size();i++)
    {
        ans+=(A[i]-'A'+1)*pow(26,A.size()-i-1);
    }
    return ans;
}