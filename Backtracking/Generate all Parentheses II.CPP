void genbrac(int openc, int closec, int currsum, vector <string> &ans, string s)
{
    if(currsum<0)
        return;
    if((currsum==0)&&(openc==0)&&(closec==0))
        ans.push_back(s);
    if(openc<0)
        return;
    if(closec<0)
        return;
        s+='(';
    genbrac(openc-1,closec,currsum+1,ans,s);
    s.pop_back();
    s+=')';
    genbrac(openc,closec-1,currsum-1,ans,s);
    s.pop_back();
    return;
}
vector<string> Solution::generateParenthesis(int n) 
{
    vector <string> ans;
    string s="(";
    genbrac(n-1,n,1,ans,s);
    return ans;
}
