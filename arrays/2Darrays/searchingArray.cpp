#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>arr[i][j];
    }
    int i=0;
    int j=m-1;
    int target;
    cin>>target;
    while(i<n || j>=0){

        if(arr[i][j]<target)i++;
        else if(arr[i][j]>target)j--;
        else {
            cout<<"yess";
            break;
        }
    }
    }
