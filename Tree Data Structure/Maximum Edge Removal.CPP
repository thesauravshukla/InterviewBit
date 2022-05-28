int Solution::solve(int A, vector<vector<int> > &B) 
{
    if(A<=3)
        return 0;
    vector <int> parent(A+1,0);
    vector <int> children(A+1,0);
    parent[1] = -1;
    int ans=0;
    for(int i=0;i<B.size();i++)
    {
        parent[B[i][1]] = B[i][0];
        children[B[i][0]]++;
    }
    for(int i=A;i>1;i--)
    {
        children[parent[i]]+=children[i];
    }
    for(int i=2;i<=A;i++)
    {
        if(children[i]%2 == 1)
            ans++;
    }
    return ans;
    
}

    
}


