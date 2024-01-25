#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;


    int lo=0;
    int hi=n/2;
    bool flag=false;
    int mid;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(mid*mid==n){
            cout<<mid;
            flag=true;
            break;
        }
        else if(mid*mid<n)lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false)cout<<hi;

return 0;
}