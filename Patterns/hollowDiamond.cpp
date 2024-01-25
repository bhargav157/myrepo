#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int q=1;
    int b=2*n-5;

    
    for(int i=1;i<=2*n-1;i++){
        if(i<=n){for(int j=1;j<=(n-i);j++)cout<<" ";
        cout<<"*";
        for(int k=1;k<q-1;k++)cout<<" ";
        if(i>1)cout<<"*";
        cout<<endl;
        q+=2;
        

    }
     if(i>n){
        for(int l=1;l<=(i-n);l++)cout<<" ";
        cout<<"*";
        for(int m=1;m<=b;m++)cout<<" ";
        if(i<2*n-1)cout<<"*";
        cout<<endl;
        b-=2;

    }
    }
   
}