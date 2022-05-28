string Solution::solve(string A) 
{
    int ind=-1;
        int k=INT_MAX;
    int kind=-1;
    for(int i=0;i<A.size()-1;i++)
    {
        if((A[i]-'0')<=(A[i+1]-'0'))
            {
                ind=i;
                break;
            }
    }
    if(ind==-1)
    {
        string str="-1";
        return str;
    }

    else
    {
        for(int i=ind;i<A.size();i++)
        {
            if(A[i]>A[ind])
            {
                if(A[i]<k)
                {
                    k=A[i];
                    kind=i;
                }
            }
        }
    }
    if(kind==-1)
    {
        string str="-1";
        return str;
    }
    else
    {
        char temp;
        temp=A[ind];
        A[ind]=A[kind];
        A[kind]=temp;
        sort(A.begin()+ind+1,A.end());;
        return A;
    }
        
    
}
