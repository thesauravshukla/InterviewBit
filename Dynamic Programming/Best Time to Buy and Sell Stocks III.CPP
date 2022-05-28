int Solution::maxProfit(const vector<int> &A) 
{
    if(!A.size())
        return 0;
    if(A.size()==1)
        return 0;
    if(A.size()==2)
        return max(A[1]-A[0],0);
    vector <int> left(A.size(),0);
    vector <int> right(A.size(),0);
    int mini=A[0];
    int maxi=A[A.size()-1];
    for(int i=1;i<A.size();i++)
    {
        
        left[i] = max(left[i-1], A[i]-mini);
        mini = min(mini,A[i]);
    }
    for(int i=A.size()-2;i>=0;i--)
    {
        
        right[i] = max(right[i+1],maxi-A[i]);
        maxi=max(maxi,A[i]);
    }
    int prof=0;
    for(int i=1;i<A.size();i++)
    {
        prof=max(prof, right[i]+left[i-1]);
    }
    return prof;
    
}
