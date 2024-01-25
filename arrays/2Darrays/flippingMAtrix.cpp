#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    // rows flipping
    for(int i=0;i<n;i++){
       if(arr[i][0]==0){
        for(int j=0;j<m;j++){
            if(arr[i][j]==1)arr[i][j]=0;
            else arr[i][j]=1;
        }
       }
    }

    // column flipping
    for(int i=0;i<m;i++){
        int noo=0,noz=0;
        for(int j=0;j<n;j++){
            if(arr[j][i]==0)noz++;
            else noo++;
        }
        if(noz>noo){
            for(int k=0;k<n;k++){
                if(arr[k][i]==0)arr[k][i]=1;
                else arr[k][i]=0;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

     
}