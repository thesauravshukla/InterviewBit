int Solution::solve(vector<string> &A) 
{
    vector <float> temp;
    for(int i=0;i<A.size();i++)
    {
        temp.push_back(stof(A[i]));
    }
    float num1=temp[0],num2=temp[1],num3=temp[2];
    for(int i=3;i<temp.size();i++)
    {
        if(((num1+num2+num3)>1)&&((num1+num2+num3)<2))
        {
            return 1;
        }
            
            
        else if((num1+num2+num3)>2)
        {
            if((num1 > num2)&&(num1 > num3))
            num1 = temp[i];
            
            else if((num2 > num1)&&(num2 > num3))
            num2 = temp[i];
            
            else
            num3 = temp[i];
        }
        else
        {
            if((num1 < num2)&&(num1 < num3))
            num1 = temp[i];
            
            else if((num2 < num1)&&(num2 < num3))
            num2 = temp[i];
            
            else
            num3 = temp[i];
        }
    }
    if(((num1+num2+num3)>1)&&((num1+num2+num3)<2))
        {
            return 1;
        }
        
        return 0;
    
    
}
