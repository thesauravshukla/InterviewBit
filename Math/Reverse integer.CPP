int Solution::reverse(int A) 
{
    long long int rev=0;
    int flag=0;
    if(A<0)
    {
        flag=1;
        A=A*-1;
    }
    while(A)
    {
        int temp = A%10;
        A = A/10;
        rev = 10*rev + temp;
        // cout<<"("<<A<<","<<rev<<","<<temp<<")"<<" ";
    }
    if(rev>INT_MAX)
        return 0;
    if(flag==1)
    {
        rev=rev*-1;
        return rev;
    }
    else
        return rev;
}
