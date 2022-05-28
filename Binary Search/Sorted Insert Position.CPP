int Solution::searchInsert(vector<int> &A, int B) 
{
    int left=0,right=A.size()-1;
    if(A[0]>B)
        return 0;
    if(A[A.size()-1] < B)
        return A.size();
    while(left<=right)
    {
        int mid = left + (right-left)/2 ;
        if(A[mid] == B)
            return mid;
        else if((A[mid] < B)&&(A[mid + 1] > B))
            return mid+1;
        else if(A[mid]<B)
            left = mid+1;
        else
            right = mid-1;
    }
    return -1;
}
