void Solution::setZeroes(vector<vector<int> > &A) 
{
    unordered_map <int,bool> rzero;
    unordered_map <int,bool> czero;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            if(A[i][j] == 0)
            {
                rzero[i]=true;
                czero[j]=true;
            }
        }
    }
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            if((!rzero[i])&&(!czero[j]))
            {
                A[i][j] = 1;
            }
            else
            {
                A[i][j]=0;
            }
        }
    }
    
}
