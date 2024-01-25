#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums[]={2,5};
    int n=sizeof(nums)/sizeof(nums[0]);
     for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
       
bool flag;
        for(int i=0;i<n;i++){
            flag=true;
            int a;
            if(i==0)a=0;
            else a=nums[i-1];
            cout<<nums[n-1]-nums[i]<<"% "<<a;
            if(nums[n-1]-nums[i]==a){cout<<i;
            flag=false;}
        }
       if(flag==true)cout<<'t';
        
return 0;
}