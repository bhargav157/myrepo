#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int size,int n ){
    int m=n+1;
    int q=size-1;
    for(int i=1;i<=(size-n)/2;i++){
        swap(arr[m],arr[q]);
        m++;
        q--;
    }
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int idx=-1;

    // finding pivot
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            idx=i;
            break;
        }
    }

   

    
    if(idx==-1){
     reverse(arr,n,idx);
     for(int i=0;i<n;i++)cout<<arr[i];
     return 0;

     
    }

    // sorting
    reverse(arr,n,idx);
    
    //next graetest
    for(int i=idx+1;i<n;i++){
        if(arr[idx]<arr[i]){
            swap(arr[idx],arr[i]);
            break;
        }
    } 

    // printing
    for(int i=0;i<n;i++)cout<<arr[i];
}