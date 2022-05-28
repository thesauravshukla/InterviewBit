int Solution::strStr(const string A, const string B) 
{
    if((A.size()==0)||(B.size()==0))
        return -1;
    if(A.size()>B.size())
    {
        for(int i=0;i<=A.size()-B.size();i++)
        {
            if(A[i]==B[0])
            {
                int flag=0;
                for(int j=0;j<B.size();j++)
                {
                    if(A[i+j]!=B[j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    return i;
            }
        }
    }
    else
    {
        for(int i=0;i<=B.size()-A.size();i++)
        {
            if(B[i]==A[0])
            {
                int flag=0;
                for(int j=0;j<A.size();j++)
                {
                    if(B[i+j]!=A[j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    return i;
            }
        }
    }
    return -1;
    
}
