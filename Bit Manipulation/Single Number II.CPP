int Solution::singleNumber(const vector<int> &A) 
{
    int even=0,odd=0,num=1;
    for(int i=0;i<32;i++)
    {
        for(int j=0;j<A.size();j++)
        {
            int temp = num&A[i];
            if(temp==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        
    }
    
}
