vector<int> Solution::subUnsort(vector<int> &A) 
{
    vector <int> temp(A.size());
    vector <int> ans;
    for(int i=0;i<A.size();i++)
    {
        temp[i]=A[i];
    }
    sort(temp.begin(),temp.end());
    int l=0,r=A.size()-1,flag=0;
    while(l<A.size())
    {
        if(A[l]!=temp[l])
        {
            flag=1;
            break;
        }
        l++;
    }
    if(!flag)
    {
        ans.push_back(-1);
        return ans;
    }
    while(r>=0)
    {
        if(A[r]!=temp[r])
        {
            break;
        }
        r--;
    }
    for(int i=l;i<=r;i++)
    {
        ans.push_back(A[l]);
    }
    return ans;
    
}
