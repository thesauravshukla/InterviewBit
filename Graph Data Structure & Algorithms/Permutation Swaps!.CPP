int absroot(vector <int> &parent, int ind1)
{
    if(parent[ind1]<0)
        return ind1;
    return absroot(parent,parent[ind1]);
}
int Solution::solve(vector<int> &A, vector<int> &B, vector<vector<int> > &C) 
{
    vector <int> parent(A.size()+1,-1);
    for(int i=0;i<C.size();i++)
    {
        int temp1 = absroot(parent, A[C[i][0]-1]);
        int temp2 = absroot(parent, A[C[i][1]-1]);
        if(temp1!=temp2)
            parent[temp2] = temp1;
    }
    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=B[i])
        {
            if(absroot(parent,A[i])!=absroot(parent,B[i]))
                return 0;
        }
    }
    return true;
}
