int Solution::maxp3(vector<int> &A) 
{
    sort(A.begin(),A.end());
    if(A.size()<3)
        return 0;
    else
        return max(A[0]*A[1]*A[A.size()-1],A[A.size()-1]*A[A.size()-2]*A[A.size()-3]);
    
}