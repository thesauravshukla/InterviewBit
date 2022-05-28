vector<int> Solution::searchRange(const vector<int> &A, int B) 
{
    int left=0,right=A.size()-1;
    vector <int> ans;
    if(A[0]==B)
    {
        ans.push_back(0);
    }
    else
    {
        while(left<=right)
        {
            int mid = left + (right-left)/2 ;
            if(A[mid]==B)
            {
                if(A[mid-1]!=B)
                {
                    ans.push_back(mid);
                    break;
                }
                else
                {
                    right=mid-1;
                }
            }
            else if(A[mid]>B)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }        
    }
    left=0,right=A.size()-1;
    if(A[A.size()-1]==B)
    {
        ans.push_back(A.size()-1);
    }
    else
    {
        while(left<=right)
        {
            int mid = left + (right-left)/2 ;
            if(A[mid]==B)
            {
                if(A[mid+1]!=B)
                {
                    ans.push_back(mid);
                    break;
                }
                else
                {
                    left=mid+1;
                }
            }
            else if(A[mid]>B)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }        
    }
    if(ans.size()==0)
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }
    return ans;
    
}
