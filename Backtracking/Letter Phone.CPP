vector <char> retchar(char c)
{
    vector <char> temp;
    if(c=='0')
    {
        temp.push_back('0');
        return temp;
    }
    if(c=='1')
    {
        temp.push_back('1');
        return temp;
    }
    if(c=='2')
    {
        temp.push_back('a');
        temp.push_back('b');
        temp.push_back('c');
        return temp;
    }
    if(c=='3')
    {
        temp.push_back('d');
        temp.push_back('e');
        temp.push_back('f');
        return temp;
    }
    if(c=='4')
    {
        temp.push_back('g');
        temp.push_back('h');
        temp.push_back('i');
        return temp;
    }
    if(c=='5')
    {
        temp.push_back('j');
        temp.push_back('k');
        temp.push_back('l');
        return temp;
    }
    if(c=='6')
    {
        temp.push_back('m');
        temp.push_back('n');
        temp.push_back('o');
        return temp;
    }
    if(c=='7')
    {
        temp.push_back('p');
        temp.push_back('q');
        temp.push_back('r');
        temp.push_back('s');
        return temp;
    }
    if(c=='8')
    {
        temp.push_back('t');
        temp.push_back('u');
        temp.push_back('v');
        return temp;
    }
    if(c=='9')
    {
        temp.push_back('w');
        temp.push_back('x');
        temp.push_back('y');
        temp.push_back('z');
        return temp;
    }
    return temp;
}
vector<string> Solution::letterCombinations(string digits) 
{
    vector <string> ans;
    if(!digits.size())
        return ans;
    queue <string> q;
    vector <char> t = retchar(digits[0]);
    for(int i=0;i<t.size();i++)
    {
        string temp="";
        temp+=t[i];
        q.push(temp);
    }
    int l=1;
    while(q.size()>0)
        {
    int s = q.size();
        vector <char> c = retchar(digits[l]);
        ans.clear();
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<c.size();j++)
            {
                string stemp = q.front();
                stemp+=c[j];
                q.push(stemp);
            }
            ans.push_back(q.front());
            q.pop();
        }
        l++;
    }
    return ans;
}
