vector<int> Solution::dNums(vector<int> &A, int B) 
{
    map <int,bool>seen;
    map <int,int> count;
    int init=0;
    for(int i=0;i<B;i++)
    {
        if(!seen[A[i]])
        {
            seen[A[i]] = true;
            init++;
        }
        count[A[i]]++;
    }
    int right=B-1;
    vector <int> ans;
    ans.push_back(init);
    while(right<A.size())
    {
        count[A[right-B+1]]--;
        count[A[right+1]]++;
        if(A[right-B+1]!=A[right+1])
        {
            if(!count[A[right-B+1]])
            {
                init--;
            }
            if(count[A[right+1]]==1)
            {
                init++;
            }
        }
        ans.push_back(init);
        right++;
    }
    return ans;
    
}
