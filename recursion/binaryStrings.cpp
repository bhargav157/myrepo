#include<bits/stdc++.h>
using namespace std;
void binary(int n,string s){
    if(s.size()==n){
        cout<<s<<" ";
        return;
    }
    binary(n,s+'0');
     if(s[s.size()-1]!='1')binary(n,s+'1');
}
int main(){
    int n;
    cin>>n;
    string s="";
    binary( n,s);

return 0;
}