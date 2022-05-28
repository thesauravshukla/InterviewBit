 bool isPalindrome(string s)
{
    if(s.size()==0)
        return true;
    if(s.size()==1)
            return true;
    int l=0,r=s.size()-1;
    while(l<=r)
    {
        if(s[l]!=s[r])
            return false;
        l++;
        r--;
    }
    return true;
}
void genpalindrome(vector <vector<string>> &ans, vector<string> curr,int currpos,string s)
{
    if(currpos==s.size()-1)
    {
        ans.push_back(curr);
        return;
    }
    string temp="";
    for(int i=currpos+1;i<s.size();i++)
    {
        temp+=s[i];
        if(isPalindrome(temp))
        {
            curr.push_back(temp);
            genpalindrome(ans,curr,i,s);
            curr.pop_back();
        }
    }
}
vector<vector<string> > Solution::partition(string s) 
{
    vector <vector<string>> ans;
    vector <string> curr;
    int currpos=-1;
    genpalindrome(ans,curr,currpos,s);
    return ans;
    
}
