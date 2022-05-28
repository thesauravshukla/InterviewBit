int Solution::sqrt(int A) 
{
    long long int low=1,high=100000,mid=0,prev=1;
    if(A==0)
        return 0;
    while(low<=high)
    {
        mid = low+(high-low)/2;
        if(mid*mid == A)
            return mid;
        if(prev*prev>A && mid*mid<A)
            return mid;
        if(mid*mid > A)
            high=mid-1;
        else
            low=mid+1;
        prev=mid;
    }
    return -1;
    
}
