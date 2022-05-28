int calcsum(vector <int> A, int x)
{
    int sum=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>=x)
        {
            sum+=A[i]-x;
        }
    }
    return sum;
}
int Solution::solve(vector<int> &A, int B) 
{
    int low=1,high=1000000;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(calcsum(A, mid)==B)
            return mid;
        else if(calcsum(A,mid)>B && calcsum(A,mid+1)<B)
            return mid;
        else if(calcsum(A,mid) < B)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}
