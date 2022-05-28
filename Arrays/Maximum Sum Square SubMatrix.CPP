int Solution::solve(vector<vector<int> > &A, int k) 
{
    vector <vector <int>> stripSum(A.size(), vector <int> (A.size()));
    for (int j=0; j<A.size(); j++)
    {
        int sum = 0;
        for (int i=0; i<k; i++)
            sum += A[i][j];
        stripSum[0][j] = sum;
        for (int i=1; i<A.size()-k+1; i++)
        {
            sum += (A[i+k-1][j] - A[i-1][j]);
            stripSum[i][j] = sum;
        }
    }
    int max_sum = INT_MIN;
    for (int i=0; i<A.size()-k+1; i++)
    {
        int sum = 0;
        for (int j = 0; j<k; j++)
            sum += stripSum[i][j];
        if (sum > max_sum)
        {
            max_sum = sum;
        }
        for (int j=1; j<A.size()-k+1; j++)
        {
            sum += (stripSum[i][j+k-1] - stripSum[i][j-1]);
            if (sum > max_sum)
            {
                max_sum = sum;
            }
        }
    }
    return max_sum;
    
}
