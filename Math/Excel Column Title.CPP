string Solution::convertToTitle(int A) 
{
    string ans = "";
    int r = 0;
    vector <int> v;
    while(A)
    {
        r = A%26;
        if(!r)
        {
            r=26;
        }
        v.push_back(r);
        A=(A-1)/26;
    }
    for(int i=1; i<=v.size();i++)
    {
        ans+=(char)(v.at(v.size()-i)+64);
    }
    return ans;
    
}
