#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int j=1;j<=(n);j++)cout<<" ";
    // cout<<1;
    // cout<<endl;
        
    for(int i=1;i<=n;i++){
        

        
            for(int k=1;k<=(n-i);k++)cout<<" ";
            cout<<i;
           for(int l=1;l<2*i-1;l++)cout<<" ";
           if(i>1)cout<<i;
           cout<<endl;

        
    }
}
