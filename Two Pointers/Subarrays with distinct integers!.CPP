int cntsubar(vector <int> A, int K)
{
    int left=0,right=0;
    int count=1;
    int ans=1;
    unordered_map <int,int> freq;
    freq[A[0]]++;
    while(left<A.size())
    {
        if(count<=K)
        {
            right++;
            freq[A[right]]++;
            if(freq[A[right]]==1)
                count++;
            ans+=right-left+1;
        }
        else
        {
            left++;
            freq[A[left-1]]--;
            if(freq[A[left-1]]==0)
            {
                count--;
            }
        }
        cout<<"("<<left<<","<<right<<","<<count<<")";
    }
    return ans;
}
int Solution::solve(vector<int> &A, int B) 
{
    return (cntsubar(A,B)-cntsubar(A,B-1));
    
}
