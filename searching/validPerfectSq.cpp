#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int lo=1;
    int hi=n/2;
    bool flag=false;

    while(lo<=hi){
        int mid=lo+ (hi-lo)/2;
        if(mid*mid==n){
            cout<<mid<<endl;
            flag=true;
            break;

        }
        else if(mid*mid<n)lo=mid+1;
        else hi=mid-1;
    }
    if(!flag)cout<<"not valid";

return 0;
}