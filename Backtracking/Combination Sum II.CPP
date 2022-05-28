void gensum(vector <vector <int>> &ans, vector <int> curr, vector <int> candidates, int target, int currpos, map <vector <int>, bool> &seen)
{
    if(!target)
    {
        if(!seen[curr]);
        ans.push_back(curr);
        return;
        }
    if(target<0)
        return;
    for(int i=currpos+1;i<candidates.size();i++)
    {
        curr.push_back(candidates[i]);
        if(!seen[curr])
        {
            seen[curr] = true;
            gensum(ans,curr,candidates,target-candidates[i],i,seen);
        }
        curr.pop_back();
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &candidates, int target) 
{
    vector <int> temp;
    vector<vector <int>> ans;
    map <vector <int>,bool> seen;
    sort(candidates.begin(),candidates.end());
    gensum(ans,temp,candidates,target,-1,seen);
    return ans;
}
