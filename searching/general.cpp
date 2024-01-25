#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[]={2,5,6,0,0,1,2};
    int lo=0;
    int hi=6;
    int pivot=-1;
    while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            cout<<mid<<" ";
            if(nums[mid]>nums[mid+1]){
                pivot=mid;
                break;
            }
            else if(nums[mid]<=nums[mid+1] && nums[mid]<nums[6])hi=mid-1;
            
            else lo=mid+1;
            
            
        }
        //cout<<pivot;
        
}