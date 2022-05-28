bool is_valid(vector<vector<char>>&A,int row,int col,char x)
{
    for(int i=0;i<9;i++)
    {
        if(A[i][col]==x)
        {
            return false;
        }
    }
    for(int i=0;i<9;i++)
    {
        if(A[row][i]==x)
        {
            return false;
        }
    }
    int curr_row=(row/3)*3,curr_col=(col/3)*3;
    for(int i=curr_row;i<curr_row+3;i++)
    {
        for(int j=curr_col;j<curr_col+3;j++)
        {
            if(A[i][j]==x)
            {
                return false;
            }
        }
    }
    return true;
}
void helper(vector<vector<char>>&ans,vector<vector<char>>A,int i,int j)
{
    if(i==9)
    {
        ans=A;
        return;
    }
    int next_i,next_j;
    if(j==A[0].size()-1)
    {
        next_i=i+1;
        next_j=0;
    }
    else
    {
        next_i=i;
        next_j=j+1;
    }
    if(A[i][j]!='.')
    {
        helper(ans,A,next_i,next_j);
    }
    else
    {
       for(char x='1';x<='9';x++)
       {
           if(is_valid(A,i,j,x))
            {
               A[i][j]=x;
               helper(ans,A,next_i,next_j);
               A[i][j]='.';
            }
        } 
    }
}
void Solution::solveSudoku(vector<vector<char>> &A) 
{
    vector<vector<char>>ans;
    helper(ans,A,0,0);
    A=ans;
}