#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int lo=0;
    int hi=n-1;
    int pivot=-1;
    while(lo<=hi){
        int  mid=  (hi+lo)/2;
        if(arr[mid]>arr[mid+1]){
            pivot=mid;
            break;

        }
        else if( arr[mid]<arr[n-1]&& arr[mid]<arr[mid+1])hi=mid-1;
        else lo=mid+1;
    }
    cout<<pivot;
    int target;
    cin>>target;

    if(target<=arr[pivot] && target >= arr[0]){
        lo=0;
        hi=pivot;
        while(lo<=hi){
           int mid= lo + (hi-lo)/2;
           if(arr[mid]==target ){
            cout<<mid;
            break;
           }
           else if(arr[mid]>target)hi=mid-1;
           else lo=mid+1;
            
        }
    }
    else {
        lo=pivot+1;
        hi=n-1;
        while(lo<=hi){
            int mid= lo + (hi-lo)/2;
           if(arr[mid]==target ){
            cout<<mid;
            break;
           }
           else if(arr[mid]>target)hi=mid-1;
           else lo=mid+1;
        }
    }


return 0;
}