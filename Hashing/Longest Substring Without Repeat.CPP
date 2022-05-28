int Solution::lengthOfLongestSubstring(string s) 
{
    int l=0,r=0;
    unordered_map <char,bool> seen;
    seen[s[0]] = true;
    int ans=1,curr=1;
    while(r<s.size()-1)
    {
        if(l==r)
        {
            if(seen[s[r+1]])
            {
                r++;
                l++;
            }
            else
            {
                seen[s[r+1]] = true;
                r++;
                curr++;
            }
        }
        else
        {
            if(seen[s[r+1]])
            {
                seen[s[l]] = false;
                l++;
                curr--;
            }
            else
            {
                r++;
                seen[s[r]] = true;
                curr++;
            }
        }
        // cout<<"("<<l<<","<<r<<")";
        ans = max(ans,curr);
    }
    return ans;
}
