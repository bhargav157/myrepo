#include<bits/stdc++.h>
using namespace std;

int countV(vector<int>a , vector<int> b){
    int i=0,j=0;
    int count=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else i++;
        }
       
        return count;
       
        
}

void mergeVec(vector<int> &a,vector<int> &b,vector<int> &v){
    int count=0;
    int i=0,j=0,k=0;
    

    
    while(i<a.size()&&j<b.size()){
        if(a[i]<=b[j])v[k++]=a[i++];
        else {v[k++]=b[j++];
        }
    }

    if(i==a.size())while(j<b.size())v[k++]=b[j++];
    if(j==b.size())while(i<a.size())v[k++]=a[i++];
    

}
int mergeSort(vector<int> &v){
    static int c=0;
    
    int n=v.size();
   
    if(n==1)return 0;
    
    int n1=n/2,n2=n-n/2;

    vector<int> a(n1),b(n2);

    for(int i=0;i<n1;i++)a[i]=v[i];
    for(int i=0;i<n2;i++)b[i]=v[i+n1];

    mergeSort(a);
    mergeSort(b);
    
    
    c+=countV(a,b);
   

    mergeVec(a,b,v);
    a.clear();
    b.clear();
    return c;
   
    
}
int main(){
    int arr[]={5,1,3,0,4,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    
    
  cout<<mergeSort(v);



return 0;
}