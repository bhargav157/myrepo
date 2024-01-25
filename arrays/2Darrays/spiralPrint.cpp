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

    int maxr,minr,maxc,minc;
    maxr=n-1;maxc=m-1;minr=0;minc=0;
    while(maxr>=minr || minc<=maxc  ){
        for(int i=minc;i<=maxc;i++){
            cout<<arr[minr][i]<<" ";
        }minr++;
        if(minr>maxr || minc>maxc)break;

        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }maxc--;
        if(minr>maxr || minc>maxc)break;

        for(int i=maxc;i>=minc;i--){
            cout<<arr[maxr][i]<<" ";
        }maxr--;
        if(minr>maxr || minc>maxc)break;

        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }minc++;
        if(minr>maxr || minc>maxc)break;
    }
}