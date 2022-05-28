int Solution::solve(string A) 
{
    int left=0,right=A.size()-1;
    int flag=0;
    while(left<=right)
    {
        if((A[left]!=A[right])&&(flag==1))
            return 0;
        else if(A[left]!=A[right])
        {
            flag=1;
            if(A[left+1]==A[right])
                left++;
            else if(A[left]==A[right-1])
                right--;
            else
                return 0;
        }
        left++;
        right--;
    }
    return 1;
    
}
