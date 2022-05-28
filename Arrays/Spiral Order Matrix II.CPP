vector<vector<int> > Solution::generateMatrix(int A) 
{
    vector <vector <int>> ans(A, vector <int> (A));
    int k=0,curr=1;
    if(A==1)
    {
        vector<int> temp;
        temp.push_back(1);
        vector <vector <int>> ans2;
        ans2.push_back(temp);
        return ans2;
    }
    for(int k=0;k<A/2;k++)
    {
        for(int i=k;i<A-k;i++)
        {
            ans[k][i] = curr;
            curr++;
        }
        
        for(int i=k+1;i<A-k;i++)
        {
            ans[i][A-k-1] = curr;
            curr++;
        }
        for(int i=A-k-2;i>=k;i--)
        {
            ans[A-k-1][i] = curr;
            curr++;
        }
        for(int i=A-k-2;i>k;i--)
        {
            ans[i][k] = curr;
            curr++;
        }    
    }
     for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return ans;
    
}
