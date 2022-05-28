vector<int> Solution::solve(int A, vector<int> &B) 
{
    int mini=INT_MAX;
    for(int i=0;i<B.size();i++)
    {
        mini=min(mini,B[i]);
    }
    int curr=0, hits=A/mini;
    vector <int> ans;
    while(A>=0)
    {
        if(A-B[curr] >= mini*(hits-1))
        {
            A=A-B[curr];
            ans.push_back(curr);
            hits--;
        }
        else
            curr++;
    }
    ans.pop_back();
    return ans;
    
}
