#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else break;
        }
    }
    int sum=0;
    int num=0;
    for(int i=0;i<n;i++){
        num*=10;
        num+=arr[i];
    }
    sum+=num;
    num=0;
    for(int i=n-1;i>0;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    for(int i=0;i<n;i++){
        num*=10;
        num+=arr[i];
    }
    sum+=num;
    cout<<sum;


return 0;
}