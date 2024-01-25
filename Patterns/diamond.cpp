#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=(2*n-3);
    for(int i=1;i<=(2*n-1);i++){
        if(i<=n){
        for(int j=0;j<(n-i);j++){
            cout<<" ";
        }
        for(int k=0;k<(2*i-1);k++)cout<<"*";
        cout<<endl;
        }
        
        if(i>n){
            for(int l=0;l<(i-n);l++)cout<<" ";
            for(int m=0;m<(a);m++)cout<<"*";
            a-=2;
           
            cout<<endl;
        }

    }
}