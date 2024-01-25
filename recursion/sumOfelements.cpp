#include<bits/stdc++.h>
using namespace std;
void sum(int arr[],int n){
    static int s=0;
    static int idx=0;
    if(idx==n){
        cout<<s;
        return;
    }
    s+=arr[idx++];
    sum(arr,n);



}
int main(){
    int arr[]={1,2,3,4};
    sum(arr,4);

return 0;
}