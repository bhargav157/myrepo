#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int noo,noz,noot;
    noo=0,noz=0,noot=2;
    for(int  i=0;i<n;i++){
        if(arr[i]==1)noo++;
        else if(arr[i]==0)noz++;
        else noot++;
    }
    for(int i=0;i<n;i++){
        if(i<noz-1)arr[i]=0;
        else if(i>=noz && i<n-noot-1)arr[i]=1;
        else arr[i]=2;
    }
    for(int i=0;i<n;i++)cout<<arr[i];
}