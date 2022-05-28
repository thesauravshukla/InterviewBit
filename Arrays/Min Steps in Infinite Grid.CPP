int Solution::coverPoints(vector<int> &A, vector<int> &B) 
{
    int ans=0;
    for(int i=1;i<A.size();i++)
    {
        if((A[i]>=A[i-1])&&(B[i]>=B[i-1]))
        {
            int temp;
            temp = min(A[i]-A[i-1],B[i]-B[i-1]);
            ans += temp;
            ans += max(A[i]-A[i-1]-temp,B[i]-B[i-1]-temp);
        }
        else if((A[i]>=A[i-1])&&(B[i]<=B[i-1]))
        {
            int temp;
            temp = min(A[i]-A[i-1],B[i-1]-B[i]);
            ans += temp;
            ans += max(A[i]-A[i-1]-temp,abs(B[i-1]-B[i])-temp);
        }
        else if((A[i]<=A[i-1])&&(B[i]<=B[i-1]))
        {
            int temp;
            temp = min(A[i-1]-A[i],B[i-1]-B[i]);
            ans += temp;
            ans += max(abs(A[i-1]-A[i])-temp,abs(B[i-1]-B[i])-temp);
        }
        else if((A[i]<=A[i-1])&&(B[i]>=B[i-1]))
        {
            int temp;
            temp = min(A[i-1]-A[i],B[i]-B[i-1]);
            ans += temp;
            ans += max(abs(A[i-1]-A[i])-temp,B[i]-B[i-1]-temp);
        }
    }
    return ans;
}
