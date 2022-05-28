vector<string> Solution::prettyJSON(string A) {
    vector<string> ans;
    string temp ="";
    int cnt=0,level=0;
    int mx =1;
    for(int i=0;i<A.length();i++){
        if(A[i]=='[' || A[i]=='{')
            level++;
        else if(A[i]==']' || A[i]=='}')
            level--;
        mx = max(mx,level);
    }
    
    
    vector<string> indent;
    string curr="";
    for(int i=0;i<=mx;i++){
        indent.push_back(curr);
        curr+="\t";
    }
    
    
    for(int i=0;i<A.length()-1;i++){
        temp+=A[i];
        if(A[i]=='[' || A[i]=='{'){
            cnt++;
            ans.push_back(indent[cnt-1]+temp);
            temp ="";
        }
        else if((A[i]==']' || A[i]=='}') && A[i+1]!=','){
            ans.push_back(indent[cnt-1]+temp);
            temp ="";
            cnt--;
        }
        else if((A[i]==']' || A[i]=='}') && A[i+1]==','){
            ans.push_back(indent[cnt-1]+temp+A[i+1]);
            temp ="";
            i++;
            cnt--;
        }
        else if(A[i]==','){
            ans.push_back(indent[cnt]+temp);
            temp= "";
        }
        else if(A[i+1]=='[' || A[i+1]=='{' || A[i+1]==']' || A[i+1]=='}'){
            ans.push_back(indent[cnt]+temp);
            temp = "";
        }
    }
    temp ="";
    temp+= A[A.length()-1];
    ans.push_back(temp);
    return ans;
}