void dfs(vector <vector<char>> board, map <pair<int,int>,bool> &seen, int i, int j)
{
    seen[make_pair(i,j)] = true;
    if((i>0)&&(board[i-1][j]=='O')&&(!seen[make_pair(i-1,j)]))
    {
        dfs(board,seen,i-1,j);
    }
    if((i<board.size()-1)&&(board[i+1][j]=='O')&&(!seen[make_pair(i+1,j)]))
    {
        dfs(board,seen,i+1,j);
    }
    if((j>0)&&(board[i][j-1]=='O')&&(!seen[make_pair(i,j-1)]))
    {
        dfs(board,seen,i,j-1);
    }
    if((j<board[0].size()-1)&&(board[i][j+1]=='O')&&(!seen[make_pair(i,j+1)]))
    {
        dfs(board,seen,i,j+1);
    }
    return;
}
void Solution::solve(vector<vector<char> > &board) 
{
    map <pair <int,int>, bool>seen;
    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board[i].size();j++)
        {
            if(((i==0)||(j==0)||(i==board.size()-1)||(j==board[0].size()-1))&&(board[i][j]=='O'))
                dfs(board,seen,i,j);
        }
    }
    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board[i].size();j++)
        {
            if(!seen[make_pair(i,j)])
                board[i][j] = 'X';
        }       
    }
}

