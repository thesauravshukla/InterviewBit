vector<string> Solution::fullJustify(vector<string> &A, int B) 
{
    int n = A.size();
    int charCount = 0;
    vector<string> ans;
    int start = 0;
    int wordCount = 0;
    for(int i=0;i<n;i++)
    {
        if(charCount + A[i].length() > B)
        {
            int spaces = (B - (charCount - wordCount));
            int gaps = wordCount - 1;
            string temp = "";
            for(int j=start;j<i;j++)
            {
                if(A[j] == "") continue;
                temp += A[j];
                int curSpaces = 0;
                if(gaps!=0)
                    curSpaces = (spaces + gaps - 1)/gaps;
                for(int k=0;k<curSpaces;k++) temp += " ";
                    spaces -= curSpaces;
                gaps--;
            }
            while(temp.length() != B) temp += " ";
            ans.push_back(temp);
            start = i;
            charCount = A[i].length() + 1;
            wordCount = 1;
        }
        else if(A[i].length() > 0)
        {
            charCount += A[i].length() + 1;
            wordCount++;
        }
    }
    string temp = "";
    bool flag = false;
    for(int j=start;j<n;j++)
    {
        if(A[j] == "") continue;
        flag = true;
        temp += A[j];
        if(temp.length() != B)
            temp += " "; 
    }
    while(temp.length() != B && flag) temp += " ";
    if(flag)ans.push_back(temp);
    return ans;
}