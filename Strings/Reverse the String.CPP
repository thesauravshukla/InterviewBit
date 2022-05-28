string Solution::solve(string A) 
{
    int i=A.size()-1;
    string ans="";
    while((i>=0)&&(A[i]==' '))
    {
        i--;
    }
    int j=i;
    while(j>=0)
    {
        while(A[j]==' ')
            j--;
        string temp="";
        while((j>=0)&&(A[j]!=' '))
        {
            temp+=A[j];
            j--;
        }
        reverse(temp.begin(),temp.end());
        for(int k=0;k<temp.size();k++)
            ans+=temp[k];
        ans+=" ";
    }
    while((ans.size()>0)&&(ans[ans.size()-1]==' '))
        ans.pop_back();
    return ans;
    
}
