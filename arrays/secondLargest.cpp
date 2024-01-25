#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int aarr[n];
    for(int i=0;i<n;i++){
        cin>>aarr[i];
    }
    int max,smax;
    max=INT_MIN,smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<aarr[i]){
            smax=max;
            max=aarr[i];
        }
        if(aarr[i]<max && aarr[i]>smax)smax=aarr[i];

    }
    cout<<max<<" "<<smax;
}