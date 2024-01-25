#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s;
    // getline(cin,s);
    // cout<<s;
    char str[100];
    for(int i=0;i<10;i++){
        cin>>str[i];
    }

    for(int i=0;i<10;i++){
        if(i%2==0)str[i]='a';
    }
    cout<<str;
}
