#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    // int n;
    // cin>>n;
    int arr[4]={1,2,4,5};

    int lo=0;
    int hi=3;
    int ans=-1;
    int target;
    cin>>target;

    while(lo<=hi){
        int mid=lo+ (hi-lo)/2;
        if(arr[mid]==target){
            ans=mid;
            break;
        }
        else if(arr[mid]>target)hi=mid-1;
        else lo=mid+1;
    }
    

    if(ans!=-1){
        
        v.push_back(arr[ans]);
        lo=ans+1;
        hi=ans-1;
        while(lo<=3 && hi>=0){
            
            int d1=abs(target-arr[lo]);
            int d2=abs(target-arr[hi]);
            if(d1<d2)v.push_back(arr[lo++]);
            else v.push_back(arr[hi--]);
            
        }

    }
    
    else {
       
        while(lo<=3 && hi>=0){
            int d1=abs(target-arr[lo]);
            int d2=abs(target-arr[hi]);
            if(d1<d2)v.push_back(arr[lo++]);
            else v.push_back(arr[hi--]);
            
        }

    }
    while(lo<=3){

        v.push_back(arr[lo++]);
    }
    while(hi>=0){
        v.push_back(arr[hi--]);
    }
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    }
