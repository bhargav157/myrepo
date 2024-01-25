#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i][0]==0)flag=true;
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                arr[0][j]=0;
                arr[i][0]=0;
            }
        }
    }
    for(int i=n;i>=0;i--){
        for(int j=m-1;j>0;j--){
            if(arr[0][j]==0 || arr[i][0]==0){
                arr[i][j]=0;
            }
            
        }
    }
    if(flag){
         for(int i=0;i<n;i++){
       arr[i][0]=0;
    }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

}