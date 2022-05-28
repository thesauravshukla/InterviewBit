int myCompare(string X, string Y)
{
    return (X+Y)>(Y+X);
}
string Solution::largestNumber(const vector<int> &A) 
{
    vector <string> s;
    for(int i=0;i<A.size();i++)
    {
        s.push_back(to_string(A[i]));
    }
    sort(s.begin(), s.end(), myCompare);
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        ans+=s[i];
    }
    if((ans[0]=='0')&&(ans[ans.size()-1]=='0'))
    {
        string t = "0";
        return t;
    }
   return ans;
    
}
