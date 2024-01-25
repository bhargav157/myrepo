#include<bits/stdc++.h>
using namespace std;
void mergeVec(vector<int> &a,vector<int> &b,vector<int> &v){
    int i=0,j=0,k=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<=b[j])v[k++]=a[i++];
        else v[k++]=b[j++];
    }

    if(i==a.size())while(j<b.size())v[k++]=b[j++];
    if(j==b.size())while(i<a.size())v[k++]=a[i++];

    

    

}
void mergeSort(vector<int> &v){
    int n=v.size();
    if(n==1)return;
    
    int n1=n/2,n2=n-n/2;

    vector<int> a(n1),b(n2);

    for(int i=0;i<n1;i++)a[i]=v[i];
    for(int i=0;i<n2;i++)b[i]=v[i+n1];

    mergeSort(a);
    mergeSort(b);

    mergeVec(a,b,v);
    a.clear();
    b.clear();
    
}
int main(){
    int arr[]={5,1,8,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
   for(int i=0;i<n;i++)cout<<v[i]<<" ";
   cout<<endl;
   mergeSort(v);
   for(int i=0;i<n;i++)cout<<v[i]<<" ";



return 0;
}