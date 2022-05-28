int findparent(vector <int> &parent, int element)
{
    if(parent[element]==-1)
        return element;
    else
        return findparent(parent, parent[element]);
}
void setunion(vector <int> &parent, int e1, int e2)
{
    int s1 = findparent(parent,e1);
    int s2 = findparent(parent,e2);
    parent[s1] = s2;
    return;
}
int Solution::solve(int A, vector<vector<int> > &B) 
{
    vector <int> parent(A,-1);
    for(int i=0;i<B.size();i++)
    {
        B[i][0]--;
        B[i][1]--;
    }
    for(int i=0;i<B.size();i++)
    {
        int s1 = findparent(parent,B[i][0]);
        int s2 = findparent(parent,B[i][1]);
        if(s1==s2)
            return 1;
        else
            setunion(parent,s1,s2);
    }
    return 0;
}


