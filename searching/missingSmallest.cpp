#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,1,2,4,5,6,9,12};

    int lo=0;
    int hi=7;
    int ans=-1;

    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==mid)lo=mid+1;
        else{
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<ans;

return 0;
}