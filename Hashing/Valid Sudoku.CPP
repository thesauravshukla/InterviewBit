int Solution::isValidSudoku(const vector<string> &A) 
{
    for(int i=0;i<9;i++)
    {
        unordered_map <int,bool> seen;
        for(int j=0;j<9;j++)
        {
            if(A[i][j]!='.')
            {
                if(seen[A[i][j]])
                    return false;
                else
                    seen[A[i][j]] = true;
            }
        }
    }
    for(int i=0;i<9;i++)
    {
        unordered_map <int,bool> seen;
        for(int j=0;j<9;j++)
        {
            if(A[j][i]!='.')
            {
                if(seen[A[j][i]])
                    return false;
                else
                    seen[A[j][i]] = true;
            }
        }
    }
    for(int i=0;i<9;i++)
    {
        unordered_map <int,bool> seen;
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(A[j + 3*(i/3)][k + 3*(i%3)])
            }
        }
    }
    
}
