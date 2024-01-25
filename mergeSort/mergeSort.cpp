#include<bits/stdc++.h>
using namespace std;
void mergeSort(vector<int> &a,vector<int> &b,vector<int> &v){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j])v[k++]=a[i++];
        else v[k++]=b[j++];
    }
    if(i==a.size())while(j<b.size())v[k++]=b[j++];
    else while(i<a.size())v[k++]=a[i++];
}
void merge(vector<int> &v){
    if(v.size()==1)return;
    int s=v.size();
    int n1=s/2;
    int n2=s-n1;
    vector<int> a(n1);
    vector<int> b(n2);

    for(int i=0;i<n1;i++)a[i]=v[i];
    for(int i=0;i<n2;i++)b[i]=v[i+n1];

    merge(a);
    merge(b);

    mergeSort(a,b,v);
}
int main(){
    int arr[]={7,4,6,8,1,3,9,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    cout<<v[0]<<endl;
    merge(v);
    for(int i=0;i<(n);i++)cout<<v[i]<< " ";

return 0;
}