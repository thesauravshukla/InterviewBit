int Solution::majorityElement(const vector<int> &A) 
{
    map <int,int> count;
    for(int i=0;i<A.size();i++)
    {
        count[A[i]]++;
    }
    for(int i=0;i<A.size();i++)
    {
        if(count[A[i]]>=(A.size()/2)+1)
            return A[i];
    }
    return -1;
    
}