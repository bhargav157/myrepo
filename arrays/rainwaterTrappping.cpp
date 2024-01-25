#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int next[n];
    int max=arr[n-1];
    next[n-1]=-1;
    for(int i=n-2;i>=0;i--){
    
        next[i]=max;
        if(max<arr[i])max=arr[i];
    }
    

    int prev[n];
    max=arr[0];
    prev[0]=-1;
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(arr[i]>max)max=arr[i];
    }

    for(int i=0;i<n;i++)prev[i]=min(next[i],prev[i]);
    int rain=0;

    for(int i=0;i<n;i++){
        if(arr[i]<prev[i])rain+=(prev[i]-arr[i]);
    }
    cout<<rain;
    
}