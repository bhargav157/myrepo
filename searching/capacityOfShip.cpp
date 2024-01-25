#include<bits/stdc++.h>
using namespace std;
bool capacity(int arr[],int size,int days,int ans,int &count){
     count=0;
    int i=0;
    int cap=ans;
    while(i<size){
        if(arr[i]<=cap){
            cap-=arr[i];
        }
        else {
            count++;
            cap=ans;
            i--;
        }
        i++;
    }
    count++;
    if(count==days)return true;
    else return false;
}
int main(){
    int arr[]={1,2,3,1,1};
    int days;
    cin>>days;
    int count=0;
    
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int max=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max)max=arr[i];
        sum+=arr[i];
    }
    //cout<<sum<<" "<<max;
    
    int lo=max;
    int hi=sum;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(capacity(arr,n,days,mid,count)){
            cout<<mid;
            break;
        }
        else if(count>days)lo=mid+1;
        else hi=mid-1;
        
        
    }



return 0;
}