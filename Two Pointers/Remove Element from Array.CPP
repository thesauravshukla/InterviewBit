int Solution::removeElement(vector<int> &A, int B) 
{
    int l=A.size();
    int left=0,right=A.size()-1;
    while(left<right)
    {
        if(A[right]==B)
        {
            right--;
            continue;
        }
        else if((left<right)&&(A[left]==B))
        {
            cout<<left<<" ";
            int temp=A[left];
            A[left]=A[right];
            A[right]=temp;
            left++;
            right--;
            l--;
        }
    }
    return l;
    
}    
