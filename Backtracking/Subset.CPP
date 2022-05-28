    void generatepowerset(vector <int> nums, unordered_map<int,bool> seen, vector <int> here, int s, vector <vector <int>> &ans)
    {
        ans.push_back(here);
        for(int i=s;i<nums.size();i++)
        {
            if(!seen[i])
            {
                here.push_back(nums[i]);
                seen[i] = true;
                generatepowerset(nums, seen, here,i,ans);
                here.pop_back();
                seen[i]=false;
            }
        }
        return;
    }
vector<vector<int> > Solution::subsets(vector<int> &nums) 
{
    sort(nums.begin(),nums.end());
    vector <int> emp;
    vector <vector <int>> ans;
    unordered_map<int,bool> seen;
    generatepowerset(nums,seen,emp,0,ans);
    // sort(ans.begin(),ans.end());
    return ans;
}
