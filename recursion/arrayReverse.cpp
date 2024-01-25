#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int size){
    if(size<0)return;
    cout<<arr[size];
    print(arr,size-1);

}
int main(){
    
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n-1);


return 0;
}