int Solution::hammingDistance(const vector<int> &B) 
{
    vector <int> A(B.size());
    for(int i=0;i<A.size();i++)
    {
        A[i]=B[i];
    }
    long long int ans=0;
    for(int i=0;i<32;i++)
    {
        long long int oc=0,zc=0;
        for(int j=0;j<A.size();j++)
        {
            if(A[j]%2 == 1)
                oc++;
            else
                zc++;
            A[j]=A[j]/2;
        }
        ans+=2*(oc*zc);
        ans=ans%1000000007;
    }
    return ans%1000000007;
    
}
