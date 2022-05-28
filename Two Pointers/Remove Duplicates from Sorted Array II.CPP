int Solution::removeDuplicates(vector<int> &A) 
{
    map <int,int> count;
    vector <int> ans;
    for(int i=0;i<A.size();i++)
    {
        if(count[A[i]]<2)
        {
            count[A[i]]++;
            ans.push_back(A[i]);
        }
    }
    A.clear();
    for(int i=0;i<ans.size();i++)
    {
        A.push_back(ans[i]);
    }
    return ans.size();
}



