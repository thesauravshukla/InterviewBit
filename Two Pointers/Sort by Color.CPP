void Solution::sortColors(vector<int> &A) 
{
    vector <int> count(3,0);
    for(int i=0;i<A.size();i++)
    {
        count[A[i]]++;
    }
    for(int i=0;i<A[0];i++)
        A[i]=0;
    for(int i=A[0];i<A[1]+A[0];i++)
        A[i]=1;
    for(int i=A[0]+A[1];i<A[2]+A[0]+A[1];i++)
        A[i]=2;
    
}    
