int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) 
{
    int p1=0,p2=0,p3=0,temp;
    while((p1<A.size())&&(p2<B.size())&&(p3<C.size()))
    {
        int minimum = min(A[p1],min(B[p2],C[p3]));
        int maximum = max(A[p1],max(B[p2],C[p3]));
        if(maximum-minimum == 0)
        {
            return 0;
        }
        else if(maximum-minimum < temp)
        {
            temp = maximum-minimum;
        }
        else
        {
            if(A[p1] == minimum)
                p1++;
            else if(B[p2] == minimum)
                p2++;
            else
                p3++;
        }
    }
    return temp;
    
}
