#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int size,int &count,int hours,int ans){
    count=0;
    int i=0;

    while(i<size){
        
        int a=0;
        int b=0;
        if(arr[i]>=ans){
             a=arr[i]/ans;
            count+=a;
           // cout<<count<<"^ "<<a<<"* ";
            
        }
        else count++;
        if(arr[i]>ans){
            b=arr[i]%ans;
            if(b!=0)count+=1;
        }
        // cout<<ans<<" "<<a<<"* "<<b<<"# "<<count<<"^ "<<endl;
       // cout<<count<<"^ "<<b<<"# "<<endl;

        i++;
    }
    //cout<<count<<" "<<ans<<" ";
    if(count==hours)return true;
    else return false;
}
int main(){
    int arr[]={30,11,23,4,20};
    int hours;
    cin>>hours;
    int max=INT_MIN;

    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>max)max=arr[i];
    }
    int lo=1;
    int hi=max;
    int count=0;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
      //  cout<<1<<" ";
        if(check(arr,n,count,hours,mid)){
            cout<<mid;
            break;
        }
        else if(count>hours)lo=mid+1;
        else hi=mid-1;
    }


return 0;
}