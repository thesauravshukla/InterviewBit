vector<vector<int> > Solution::solve(int A) 
{
    vector <vector <int>> ans;
    if(A==0)
        return ans;
    vector <int> temp;
    temp.push_back(1);
    ans.push_back(temp);
    temp.clear();
    for(int i=1;i<A;i++)
    {
        int prev=1;
        temp.push_back(1);
        for(int j=1;j<=i;j++)
        {
            int curr=prev*(i-j+1)/j;
            temp.push_back(curr);
            prev=curr;
        }
        ans.push_back(temp);
        temp.clear();
    }
    return ans;