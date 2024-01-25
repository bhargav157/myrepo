#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,4,3,2,1};

    int lo=1;
    int hi=8;

    while(lo<=hi){
        int mid= lo + (hi-lo)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<mid;
            break;
        }
        else if(arr[mid]>arr[mid-1])lo=mid+1;
        else hi=mid-1;
    }

return 0;
}