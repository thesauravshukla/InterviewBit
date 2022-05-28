void findwords(int pos,string A, string ans, vector <string> &mainans, unordered_map <string,bool> &present, string curr)
{
    string tempans = ans;
    for(int i=pos;i<A.size();i++)
    {
        curr += A[i];
        if(present[curr])
        {
            if(!tempans.size())
                tempans+=curr;
            else
            {
                tempans+=' ';
                tempans+=curr;
            }
            string t="";
            findwords(i+1,A,tempans,mainans,present,t);
            tempans=ans;
        }
    }
        if(!present[curr])
            return;
        if(ans.size()==0)
            ans+=curr;
        else
        {
            ans+=' ';
            ans+=curr;
        }
        mainans.push_back(ans);
        return;
}
vector<string> Solution::wordBreak(string A, vector<string> &B) 
{
    vector <string> mainans;
    unordered_map <string,bool> present;
    for(int i=0;i<B.size();i++)
    {
        present[B[i]] = true;
    }
    string curr="";
    string ans="";
    findwords(0,A,ans,mainans,present,curr);
    return mainans;
}
