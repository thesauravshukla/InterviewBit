void gencode(vector<string> &ans, unordered_map<string,bool> &seen, string str)
{
    for(int i=str.size()-1;i>=0;i--)
    {
        if(str[i]=='0')
        {
                str[i] = '1';
            if(!seen[str])
            {
                seen[str] = true;
                ans.push_back(str);
                gencode(ans,seen,str);
            }
            else
                str[i] = '0';
        }
        else if(str[i]=='1')
        {
            str[i] = '0';
            if(!seen[str])
            {
                seen[str] = true;
                ans.push_back(str);
                gencode(ans,seen,str);
            }
            else
                str[i] = '1';
        }
    }
    return;
}
vector<int> Solution::grayCode(int n) 
{
    string s = "";
    unordered_map<string,bool> seen;
    for(int i=0;i<n;i++)
    {
        s+='0';
    }
    vector <string> tempans;
        seen[s] = true;
    tempans.push_back(s);
    gencode(tempans,seen,s);
    vector <int> ans(tempans.size());
    for(int i=0;i<tempans.size();i++)
    {
        int tnum=0;
        for(int j=0;j<tempans[i].size();j++)
        {
            if(tempans[i][j]=='1')
                tnum+=pow(2,tempans[i].size()-j-1);
        }
        ans[i] = tnum;
    }
    return ans;
}
