int Solution::removeDuplicates(vector<int> &A) 
{
    int currindex=1;
    for(int i=1;i<A.size();i++)
    {
        if(A[i]!=A[i-1])
        {
            A[currindex]=A[i];
            currindex++;
        }
    }
    for(int i=currindex+1;i<A.size();i++)
    {
        A.pop_back();
    }
    return A.size();
}

