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
    int max=0;
    int idx=-1;
    for(int i=0;i<n;i++){
        int tempSum=0;
        for(int j=0;j<m;j++){
            tempSum+=arr[i][j];
        }
        
        if(max<tempSum){
            idx=i;
            max=tempSum;
            
        }
    }
    cout<<idx;
    
}