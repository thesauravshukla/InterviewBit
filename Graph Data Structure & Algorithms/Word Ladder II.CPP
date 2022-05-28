vector<vector<string> > Solution::findLadders(string start, string end, vector<string> &dict) 
{
    unordered_map <string,bool> isValid;
        vector <vector <string>> ans;
        unordered_map <string,bool> seen;
        for(int i=0;i<dict.size();i++)
        {
            isValid[dict[i]] = true;
        }
        queue <vector <string>> q;
        vector <string> temp;
        temp.push_back(start);
        if(!start.compare(end))
        {
            ans.push_back(temp);
            return ans;
        }
        seen[start] = true;
        q.push(temp);
        while(!q.empty())
        {
            int s = q.size();
            vector <string> tobeseen;
            for(int i=0;i<s;i++)
            {
                if(!(q.front()[q.front().size() - 1].compare(end)))
                {
                    ans.push_back(q.front());
                }
                string str = q.front()[q.front().size()-1];
                for(int j=0;j<str.size();j++)
                {
                    char c = str[j];
                    for(int k=0;k<26;k++)
                    {
                        str[j] = 'a' + k;
                        if((!seen[str])&&(isValid[str]))
                        {
                            tobeseen.push_back(str);
                            q.front().push_back(str);
                            q.push(q.front());
                            q.front().pop_back(); 
                        }
                    }
                    str[j] = c;
                }
                q.pop();
            }
            for(int p=0;p<tobeseen.size();p++)
                seen[tobeseen[p]]=true;
            tobeseen.clear();
            if(ans.size()>0)
                return ans;
        }
        return ans;    
}

