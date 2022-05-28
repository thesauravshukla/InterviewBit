void genpowerset(vector <vector<int>> &ans, vector <int> curr, vector <int> nums, map <vector<int>,bool> seen, int currpos)
{
    ans.push_back(curr);
    for(int i=currpos+1;i<nums.size();i++)
    {
        curr.push_back(nums[i]);
        if(!seen[curr])
        {
            seen[curr] = true;
            genpowerset(ans,curr,nums,seen,i);
        }
        curr.pop_back();
    }
}
vector<vector<int> > Solution::subsetsWithDup(vector<int> &nums) 
{
    vector <vector <int>> ans;
    sort(nums.begin(),nums.end());
    vector <int> temp;
    map <vector <int>,bool> seen;
    genpowerset(ans,temp,nums,seen,-1);
    return ans;
}
