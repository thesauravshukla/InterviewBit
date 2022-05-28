int Solution::solve(string A) 
{
    unordered_map <char,int> count;
    int temp=0;
    for(int i=0;i<A.size();i++)
    {
        count[A[i]]++;
    }
    for(int i=0;i<26;i++)
    {
        if(count['a'+i]%2 != 0)
        {
            if(A.size() % 2 == 0)
                return 0;
            else if(temp==1)
                return 0;
            else
                temp++;
        }
    }
    return 1;
}