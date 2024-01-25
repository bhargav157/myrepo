#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int max1,max2,max3;
    max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2){
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3)max3=arr[i];
    }
    cout<<max1<<" "<<max2<<" "<<max3;
}