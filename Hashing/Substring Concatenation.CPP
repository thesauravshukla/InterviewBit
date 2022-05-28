vector<int> Solution::findSubstring(string A, const vector<string> &B) 
{
    vector <int> ans;
    unordered_map <string,int> seen;
    for(int i=0;i<B.size();i++)
    {
        seen[B[i]]++;
    }
    for(int i=0;i<=A.size()-(B.size())*(B[0].size());i++)
    {
        
    }
    return ans;    
}
