int Solution::perfectPeak(vector<int> &A) 
{
    vector <int> maxtillnow (A.size());
    vector <int> mintillnow (A.size());
    maxtillnow[0] = A[0];
    mintillnow[A.size()-1] = A[A.size()-1];
    int maxi=A[0],mini=A[A.size()-1];
    for(int i=1;i<A.size();i++)
    {
        maxtillnow[i] = maxi;
        if(A[i]>maxi)
            maxi=A[i];
    }
    for(int i=A.size()-2;i>=0;i--)
    {
        mintillnow[i] = mini;
        if(A[i]<mini)
            mini=A[i];
    }
    for(int i=1;i<A.size()-1;i++)
    {
        if((A[i]>maxtillnow[i])&&(A[i]<mintillnow[i]))
            return 1;
    }
    return 0;
    
}
