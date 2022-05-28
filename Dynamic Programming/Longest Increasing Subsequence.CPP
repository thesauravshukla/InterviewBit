int Solution::lis(const vector<int> &A) 
{
    vector <int> lis(A.size(),1);
    for(int i=1;i<A.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(A[i]>A[j])
            lis[i] = max(lis[i],1+lis[j]);
        }
    }
    return lis[lis.size()-1];
    
}
