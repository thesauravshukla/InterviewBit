vector<int> Solution::slidingMaximum(const vector<int> &nums, int k) 
{
    priority_queue <pair <int,int>> maxh;
    vector <int> ans;
    unordered_map <int,bool> present;
    for(int i=0;i<k;i++)
    {
        maxh.push(make_pair(nums[i],i));
        present[i] = true;
    }
    ans.push_back(maxh.top().first);
    for(int i=k;i<nums.size();i++)
    {
        present[i-k] = false;
        maxh.push(make_pair(nums[i],i));
        present[i]=true;
        while(!present[maxh.top().second])
            maxh.pop();
        ans.push_back(maxh.top().first);
    }
    return ans;
}


