#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-1,1,0,-3};
    int prod=1;
    int pre[4],suff[4];
    pre[0]=1;
    suff[3]=1;
    for(int i=1;i<4;i++){
        pre[i]=arr[i-1]*pre[i-1];
    }
    
    //  for(int i=0;i<4;i++){
    //     cout<<pre[i]<<" ";
    // }
    // for(int i=2;i>=0;i--){
    //     suff[i]=arr[i+1]*suff[i+1];
    // }
    // for(int i=0;i<4;i++){
    //     cout<<suff[i]<<" ";
    // }
     int ans[4];
     for(int i=3;i>=0;i--){
      pre[i]*=prod;
      prod*=arr[i];
     }
     for(int i=0;i<4;i++){
        cout<<pre[i]<<" ";
     }

return 0;
}