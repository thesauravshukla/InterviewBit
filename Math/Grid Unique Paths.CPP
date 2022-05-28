int Solution::uniquePaths(int A, int B) 
{
    long long int ans=0;
    if((A==1)||(B==1))
    {
        ans =1;
    }
    else
    {
        ans = 2+(A-2)*(B-2)+A;
        cout<<ans;
    }
    return ans;
}
