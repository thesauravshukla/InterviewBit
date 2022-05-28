string to_say(string s)
{
    string ans;
    for(int i=0;i<s.size();i++)
    {
        int count=1;
        while((i<s.size()-1)&&(s[i]==s[i+1]))
        {
            count++;
            i++;
        }
            
        ans+=(to_string(count));
        ans.push_back(s[i]);
    }
    return ans;
}
string Solution::countAndSay(int A) 
{
    string s="1";
    for(int i=0;i<A-1;i++)
    {
        s=to_say(s);
    }
    return s;
    
}
