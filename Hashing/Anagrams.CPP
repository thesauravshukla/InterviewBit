vector<vector<int>> Solution::anagrams(const vector<string> &B) 
{
    map <string,vector<int>> anagramgroups;
    vector<vector<int>> ans;
    for(int i=0;i<B.size();i++)
    {
        string temp = B[i];
        sort(temp.begin(),temp.end());
        anagramgroups[temp].push_back(i+1);
    }
    for(auto i:anagramgroups)
    {
        ans.push_back(i.second);
    }
    return ans;
}
