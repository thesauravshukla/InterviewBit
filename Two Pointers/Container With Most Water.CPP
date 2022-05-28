int Solution::maxArea(vector<int> &A) 
{
    int left=0,right=A.size()-1,ans=0;
    while(left<right)
    {
        int temp = (right-left)*min(A[left],A[right]);
        ans=max(ans,temp);
        if(left>right)
            right--;
        else
            left++;
    }
    return ans;
    
}
