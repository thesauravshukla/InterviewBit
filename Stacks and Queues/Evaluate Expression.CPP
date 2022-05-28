int Solution::evalRPN(vector<string> &A) 
{
    stack <int> s;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=="+")
        {
            int num1=s.top();
                s.pop();
            int num2=s.top();
                s.pop();
            s.push(num1+num2);
        }
        else if(A[i]=="-")
        {
            int num2=s.top();
                s.pop();
            int num1=s.top();
                s.pop();
            s.push(num1-num2);
        }
        else if(A[i]=="*")
        {
            int num1=s.top();
                s.pop();
            int num2=s.top();
                s.pop();
            s.push(num1*num2);
        }
        else if(A[i]=="/")
        {
            int num2=s.top();
                s.pop();
            int num1=s.top();
                s.pop();
            s.push(num1/num2);
        }
        else
        {
            s.push(stoi(A[i]));
        }
    }
    return s.top();
    
}
