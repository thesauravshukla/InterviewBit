int Solution::isPower(int A) 
{
    int flag=1;
    for(int i=2;i*i<A;i++)
    {
        int temp=A;
        while(temp%i == 0)
        {
            temp = temp/i ;
            if(temp==1)
            {
                return i;
            }
        }
    }
    return -1;
    
}
