#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<arr[i];
            break;
        }
    }
}