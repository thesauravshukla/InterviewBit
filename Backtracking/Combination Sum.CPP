 void gensum(vector <int> candidates, int target, vector <vector <int>> &ans, vector <int> curr, map <vector <int>, bool> &seen)
{
    if(target==0)
    {
            sort(curr.begin(),curr.end());
        if(!seen[curr])
        {
            seen[curr] = true;
            ans.push_back(curr);
        }
        
        return;
        }
    if(target<0)
        return;
    for(int i=0;i<candidates.size();i++)
    {
        curr.push_back(candidates[i]);
        gensum(candidates,target-candidates[i],ans,curr,seen);
        curr.pop_back();
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &candidates, int target) 
{
    vector <int> temp;
    vector <vector <int>> ans;
    map<vector <int>, bool> seen;
    gensum(candidates, target, ans, temp,seen);
    sort(ans.begin(),ans.end());
    return ans;
    
}
