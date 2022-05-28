int Solution::solve(int A, vector<vector<int> > &B) 
{
    unordered_map <int,bool> from;
    for(int i=0;i<B.size();i++)
    {
        if(from[B[i][1]])
            return 1;
        else
        {
            from[B[i][0]] = true;   
        }
    }
    return 0;
}