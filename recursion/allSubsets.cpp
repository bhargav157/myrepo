#include<bits/stdc++.h>
using namespace std;
void subStr(string str,string s){
    
    
    if(str==""){
        cout<<s<<" ";
        return;
    }
    subStr(str.substr(1),s+str[0]);
    subStr(str.substr(1),s);
    
}
int main(){
    string str="abc";
    string s="";
    subStr(str,s);
return 0;
}