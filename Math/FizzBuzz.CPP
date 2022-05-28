vector<string> Solution::fizzBuzz(int A) 
{
    string str1 = "Fizz";
    string str2 = "Buzz";
    string str3 = "FizzBuzz";
    vector <string> ans;
    for(int i=1;i<=A;i++)
    {
        if((i%3 != 0)&&(i%5 != 0))
        {
            stringstream ss;
            ss << i;
            string str = ss.str();
            ans.push_back(str);
        }
        if((i%3 == 0)&&(i%5 != 0))
        {
            ans.push_back(str1);
        }
        if((i%3 != 0)&&(i%5 == 0))
        {
            ans.push_back(str2);
        }
        if((i%3 == 0)&&(i%5 == 0))
        {
            ans.push_back(str3);
        }
    }
    return ans;
    
}
