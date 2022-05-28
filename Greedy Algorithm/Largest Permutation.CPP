vector<int> Solution::solve(vector<int> &A, int B) 
{
    vector <int> index(A.size()+1);
    for(int i=0;i<A.size();i++)
    {
        index[A[i]]=i;
    }
    int large=A.size();
    for(int i=0;i<A.size();i++)
    {
        if((A[i]!=large)&&B)
        {
            int temp = A[i];
            A[i] = large;
            A[index[large]] = temp;
            index[temp]=index[large];
            index[large]=i;
            B--;
        }
        large--;
    }
    return A;  
}
