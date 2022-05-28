int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) 
{
    vector <int> diff(A.size());
    int flag=0;
    int start=0;
    int currsum=0;
    for(int i=0;i<A.size();i++)
    {
        diff[i] = A[i]-B[i];
    }
    for (int i=0;i<diff.size();i++)
    {
        if(diff[i]>=0)
        {
            start=i;
            flag=1;
            break;
        }
    }
    int t=start;
    if(!flag)
        return -1;
    else
    {
        for(int i=start;i<A.size();i++)
        {
            currsum+=diff[i];
            if(currsum<0)
            {
                currsum=0;
                t=i+1;
            }
        }
        if(currsum<0)
            return -1;
        else
        {
            for(int i=0;i<t;i++)
            {
                currsum+=diff[i];
                if(currsum<0)
                    return -1;
            }
            if(currsum<0)
                return -1;
            else 
                return t;
        }
        return t;
    }    
}


