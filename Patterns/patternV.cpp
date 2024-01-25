#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=2*n-3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(i-1);j++)cout<<" ";
        cout<<"*";
        for(int k=1;k<=a;k++){
            cout<<"1";
       
        }
        if(i<n)cout<<"*";
        cout<<endl;
        a-=2;
    }
}