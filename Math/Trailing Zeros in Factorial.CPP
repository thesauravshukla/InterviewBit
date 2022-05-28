int Solution::trailingZeroes(int A) 
{
    int temp=5;
    int ans=0;
    int i=1;
    while(temp<=A)
    {
        ans+=A/temp;
        i++;
        temp=pow(5,i);
    }
    return ans;
}
