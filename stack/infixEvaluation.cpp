#include<bits/stdc++.h>
using namespace std;
int solve (int val1,int val2,char oper){
    if(oper=='+')return val1+val2;
    else if(oper=='*')return val1*val2;
    else if(oper=='-')return val1-val2;
    else return val1/val2;

}
int prio(char s){
    if(s=='+' || s=='-')return 1;
    else return 2;

}
int main(){
    string s="4+5*(4-7)/5";
    stack<int> val;
    stack<char> op;
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57){
            val.push((int)s[i]-48);
        }
        else {
             if(op.size()==0)op.push(s[i]);
             else if(s[i]=='(')op.push(s[i]);
             else if(op.top()=='(')op.push(s[i]);
             else if(s[i]==')'){
                while(op.top()!='('){
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    char oper=op.top();
                    op.pop();
                    int ans=solve(val1,val2,oper);
                    val.push(ans);
                }
                op.pop();
                
             }
             else if(prio(s[i])>prio(op.top())){
                op.push(s[i]);
             }
             else {
                while(op.size()>0 && prio(op.top())>=prio(s[i]))
                 {
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    char oper=op.top();
                    op.pop();
                    int ans=solve(val1,val2,oper);
                    val.push(ans);
                 }
                 op.push(s[i]);
             }
        }
    }
    while(op.size()!=0){
                int val2=val.top();
                val.pop();
                int val1=val.top();
                val.pop();
                char oper=op.top();
                op.pop();
                int ans=solve(val1,val2,oper);
                val.push(ans);
                 
    }
    
cout<<val.top();

return 0;
}