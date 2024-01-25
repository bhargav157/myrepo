#include<bits/stdc++.h>
using namespace std;
string solve (string val1,string val2,char oper){
    string s="";
    
    s+=val1;
    s+=val2;
    s.push_back(oper);
    return s;

}
int prio(char s){
    if(s=='^')return 1;
    if(s=='+' || s=='-')return 2;
    else return 3;

}
int main(){
    string s="(5+7)/6^(4-1)*2";
    stack<string> val;
    stack<char> op;
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else {
             if(op.size()==0)op.push(s[i]);
             else if(s[i]=='(')op.push(s[i]);
             else if(op.top()=='(')op.push(s[i]);
             else if(s[i]==')'){
                while(op.top()!='('){
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    char oper=op.top();
                    op.pop();
                    string ans=solve(val1,val2,oper);
                    val.push(ans);
                }
                op.pop();
             }
             else if(prio(s[i])>prio(op.top())){
                op.push(s[i]);
             }
             else {
                while(op.size()>0 &&prio(op.top())>=prio(s[i]))
                 {
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    char oper=op.top();
                    op.pop();
                    string ans=solve(val1,val2,oper);
                    val.push(ans);
                 }
                 op.push(s[i]);
             }
        }
    }
    while(op.size()!=0){
                string val2=val.top();
                val.pop();
                string val1=val.top();
                val.pop();
                char oper=op.top();
                op.pop();
                string ans=solve(val1,val2,oper);
                val.push(ans);
                 
    }
    
cout<<val.top();

return 0;
}