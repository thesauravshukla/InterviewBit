int findPivot(vector <int> arr, int low, int high)
{
    if (high < low)
        return -1;
    if (high == low)
        return low;
    int mid = (low + high) / 2;
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;
    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1);
    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);
    return findPivot(arr, mid + 1, high);
}
int Solution::search(const vector<int> &A, int B) 
{
    int p=findPivot(A,0,A.size()-1);
    int l1=0,h1=p;
    while(l1<=h1)
    {
        int mid = l1+(h1-l1)/2;
        if(A[mid]==B)
            return mid;
        if(A[mid]<B)
            l1=mid+1;
        else
            h1=mid-1;
    }
    l1=p+1;
    h1=A.size()-1;
    while(l1<=h1)
    {
        int mid = l1+(h1-l1)/2;
        if(A[mid]==B)
            return mid;
        if(A[mid]<B)
            l1=mid+1;
        else
            h1=mid-1;
    }
    return -1;
    
}
