void genpermute(vector <vector <int>> &ans, vector <int> curr, vector <int> A, unordered_map <int,bool> seen, int done)
{
    if(done==A.size())
    {
        ans.push_back(curr);
        return;
    }
    for(int i=0;i<A.size();i++)
    {
        if(!seen[i])
        {
            seen[i] = true;
            curr.push_back(A[i]);
            done++;
            genpermute(ans,curr,A,seen,done);
            done--;
            curr.pop_back();
            seen[i] = false;
        }
    }
}
vector<vector<int> > Solution::permute(vector<int> &A) 
{
   vector <vector <int>> ans;
   vector <int> curr;
   unordered_map<int,bool> seen;
   genpermute(ans,curr,A,seen,0);
    return ans;
    
}
