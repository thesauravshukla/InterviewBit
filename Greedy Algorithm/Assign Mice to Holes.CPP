int Solution::mice(vector<int> &A, vector<int> &B) 
{
    int mini=INT_MIN;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(int i=0;i<A.size();i++)
    {
        mini=max(abs(A[i]-B[i]),mini);
    }
    return mini;
    
}