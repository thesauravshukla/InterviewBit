string Solution::intToRoman(int A) 
{
    string ans="";
    while(A)
    {
        if(A>=1000)
        {
            ans+='M';
            A-=1000;
        }
        else if(A>=900)
        {
            ans+='C';
            ans+='M';
            A-=90;
        }
        else if(A>=500)
        {
            ans+='D';
            A-=500;
        }
        else if(A>=400)
        {
            ans+='C';
            ans+='D';
            A-=400;
        }
        else if(A>=100)
        {
            ans+='C';
            A-=100;
        }
        else if(A>=90)
        {
            ans+='X';
            ans+='C';
            A-=90;
        }
        else if(A>=50)
        {
            ans+='L';
            A-=50;
        }
        else if(A>=40)
        {
            ans+='X';
            ans+='L';
            A-=40;
        }
        else if(A>=10)
        {
            ans+='X';
            A-=10;
        }
        else if(A>=9)
        {
            ans+='I';
            ans+='X';
            A-=9;
        }
        else if(A>=5)
        {
            ans+='V';
            A-=5;
        }
        else if(A>=4)
        {
            ans+='I';
            ans+='V';
            A-=4;
        }
        else
        {
            ans+='I';
            A--;
        }
    }
    return ans;
    
}
