vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) 
{
    int i1=0,i2=0;
    vector <int> ans;
    while((i1<A.size())&&(i2<B.size()))
    {
        if(A[i1]==B[i2])
            ans.push_back(A[i1]);
        else if(A[i1]>B[i2])
            i2++;
        else
            i1+++;
    }
    return ans;
    
}
