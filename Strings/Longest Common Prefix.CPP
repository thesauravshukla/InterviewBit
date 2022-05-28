string Solution::longestCommonPrefix(vector<string> &A) 
{
    string ans="";
    int l=INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        l=min(l,A[i].size());
    }
    for(int i=0;i<l;i++)
    {
        char temp=A[0][i];
        for(int j=0;j<A.size();j++)
        {
            if(A[j][i]!=temp)
                return ans;
        }
        ans+=temp;
    }
    return ans;
    
}
