#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    // reverse(s.begin(),s.begin()+n/2);
    // cout<<s<<" "<<n;;
    reverse(s.begin()+1,s.begin()+5);
    cout<<s;
}