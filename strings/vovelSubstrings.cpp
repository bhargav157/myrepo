#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.size();

    int  ans=0;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')count++;
        else{
            ans+=(count*(count+1))/2;
            count=0;
        }
    }
    if(s[n-1]=='a' || s[n-1]=='e' || s[n-1]=='i' || s[n-1]=='o' || s[n-1]=='u')ans+=(count*(count+1))/2;
    cout<<ans;


return 0;
}