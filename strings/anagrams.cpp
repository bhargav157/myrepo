// of 2 words can be made fromm one another
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string t;
    getline(cin,t);
    getline(cin,s);
    sort(t.begin(),t.end());
    sort(s.begin(),s.end());
    if(s==t)cout<<" yes";
    else cout<<"no";


return 0;
}