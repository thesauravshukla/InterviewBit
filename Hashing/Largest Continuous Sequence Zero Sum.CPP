vector<int> Solution::lszero(vector<int> &A) 
{
    int ansl=0,ansr=0;
    map<int,bool> seen;
    map <int,int> ind;
    int curr=0;
    int flag=0;
    seen[0] = true;
    ind[0] = -1;
    for(int i=0;i<A.size();i++)
    {
        curr+=A[i];
        else if(seen[curr] && i-ind[curr]-1 > ansr-ansl)
        {
            flag=1;
            ansl = ind[curr]+1;
            ansr = i;
        }
        else
        {
            seen[curr] = true;
            ind[curr] = i;
        }
    }
    vector <int> ans;
    if(!flag)
        return ans;
    for(int i=ansl;i<=ansr;i++)
        ans.push_back(A[i]);
    return ans;
}
