#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int x=0;
    for(int i=0;i<s.length();i++){
         x*=10;
        x+=(int)s[i]-(int)'0';
       
    }
    cout<<x<<endl;
    cout<<s;
}