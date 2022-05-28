int Solution::solve(vector<int> &A, int B)
{
    int left=0,right=A.size()-1,count=0;
    if(A[0]>B)
        return 0;
    if(A[A.size()-1]<=B)
        return A.size();
    while(left<=right)
    {
        int mid = left + (right-left)/2;
        if((A[mid]>B)&&(A[mid-1]<=B))
            return mid;
        else if(A[mid]>B)
            right = mid-1;
        else
            left=mid+1;
    }
    return 0;
    
}
