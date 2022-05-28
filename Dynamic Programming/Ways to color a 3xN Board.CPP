int Solution::solve(int A) 
{
    long long int c2 = 12;
    long long int c3 = 24;
    for(int i=2;i<=A;i++)
    {
        long long int temp = (7*c2+5*c3)%1000000007;
        c3 = (10*c2+11*c3)%1000000007;
        c2 = temp;
    }
    return (c2+c3)%1000000007;
}
