#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>arr[i][j];
    }
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    int ans=0;
    for(int i=min(l1,l2);i<=max(l1,l2);i++){
        for (int j=min(r1,r2);j<=max(r1,r2);j++){
            ans+=arr[i][j];
        }

    }
    cout<<ans;

}