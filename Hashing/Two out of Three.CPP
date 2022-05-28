vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) 
{
    unordered_map<int,bool> present;
    unordered_map<int,bool> present1;
    unordered_map<int,bool> present2;
    unordered_map<int,bool> present3;
    for(int i=0;i<A.size();i++)
    {
        present[A[i]] = true;
        present1[A[i]] = true;
    }
    for(int i=0;i<B.size();i++)
    {
        present[B[i]] = true;
        present2[B[i]] = true;
    }
    for(int i=0;i<C.size();i++)
    {
        present[C[i]] = true;
        present3[C[i]] = true;
    }
    vector <int> ans;
    for(auto i:present)
    {
        if(present1[i.first]&&present2[i.first]||present3[i.first]&&present2[i.first]||present1[i.first]&&present3[i.first])
        {
            ans.push_back(i.first);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
    
}
