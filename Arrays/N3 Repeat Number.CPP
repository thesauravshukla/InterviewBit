int Solution::repeatedNumber(const vector<int> &A) 
{
    int me1=INT_MAX,me2=INT_MAX,c1=0,c2=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==me1)
            c1++;
        else if(A[i]==me2)
            c2++;
        else if(c1==0)
        {
            c1++;
            me1=A[i];
        }
        else if(c2==0)
        {
            c2++;
            me2=A[i];
        }
        else
        {
            c1--;
            c2--;
        }
    }
        int t1=0,t2=0;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]==me1)
            t1++;
            else if(A[i]==me2)
            t2++;
        }
        if(t1>A.size()/3)
            return me1;
        else if(t2>A.size()/3)
            return me2;
        else
            return -1;
}
