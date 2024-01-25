#include<bits/stdc++.h>
using namespace std;
bool helper(string s){
        stack<char> st;
        int n=s.size();
        if(n%2!=0)return 0;
        for(int i=0;i<n;i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                st.push(s[i]);
            }
            else if(st.size()!=0 && s[i]==st.top())st.pop();
            else return 0;
            
            
        }
        if(st.size()==0)return 1;
        else return 0;
    }
    
int main(){
    string s="(){}[]";
    cout<<helper(s);

return 0;
}