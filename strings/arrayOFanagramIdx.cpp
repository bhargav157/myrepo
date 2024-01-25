#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string p;
    vector<int>v;

    getline(cin,s);
    getline(cin,p);
    int n=s.size();
    int m=p.size();
    int count_s[26];
    int count_p[26];
    // string temp;
    // sort(p.begin(),p.end());
    // for(int i=0;i<max(m,n);i++){
    //     temp=s.substr(i,m);
    //     //cout<<temp<<" "<<endl;
    //     sort(temp.begin(),temp.end());
    //     //cout<<temp<<" "<<p<<" "<<i<<endl;
    //     if(p==temp)v.push_back(i);
    // }
    // for(int i=0;i<v.size();i++)cout<<v[i]<<" "<<endl;
    for(int i=0;i<m;i++)count_p[p[i]++];
    for(int j=0;j<n;j++){
        
    }

return 0;
}