#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int lo,mid,high;
    lo=0,mid=0,high=n-1;

    while(mid<=high){
        if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
        else if(arr[mid]==1)mid++;
        else {
            swap(arr[mid],arr[lo]);
            mid++;
            lo++;
        }

    }
    for(int i=0;i<n;i++)cout<<arr[i];

}