#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    bool flag=false;
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[s.length()-i-1]){
            flag=true;
            break;
        }
    }
    if(flag)cout<<"no";
    else cout<<" yes";
}