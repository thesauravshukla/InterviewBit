int Solution::searchMatrix(vector<vector<int> > &A, int B) 
{
    int l1=0,l2=A.size()-1;
    while(l1<=l2)
    {
        int mid=l1+(l2-l1)/2;
        if((A[mid][0]<=B)&&(A[mid][A[0].size()-1]>=B))
        {
            int left=0,right=A[0].size()-1;
            while(left <= right)
            {
                int mid2 = left + (right-left)/2;
                if(A[mid][mid2] == B)
                    return 1;
                else if(A[mid][mid2] < B)
                    left=mid2+1;
                else
                    right=mid2-1;
            }
            return 0;
        }
        else if(A[mid][0] > B)
        {
            l2=mid-1;
        }
        else if(A[mid][0] < B)
        {
            l1=mid+1;
        }
    }
    return 0;
    
}
