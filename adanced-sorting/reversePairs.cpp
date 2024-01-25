#include<bits/stdc++.h>
using namespace std;
int count(vector<int> &a,vector<int> &b){
        int i=0,j=0;
        int count=0;
        while(i<a.size()&&j<b.size()){
            if(a[i]>2*b[j]){
                count+=a.size()-i;
                j++;
            }
            else i++;
        }
        return count;
    }
    void merger(vector<int> &a,vector<int>&b,vector<int>&v){
        int i=0;int j=0;
        int k=0;
         while(i<a.size()&&j<b.size()){
        if(a[i]<=b[j])v[k++]=a[i++];
        else {v[k++]=b[j++];
        }
    }

    if(i==a.size())while(j<b.size())v[k++]=b[j++];
    if(j==b.size())while(i<a.size())v[k++]=a[i++];
    
    }

    
    int mergeS(vector<int> &v){
         int n=v.size();
        if(n==1)return 0;
        static int c=0;
       
        int n1=n/2,n2=n-n/2;
        vector<int> a(n1);
        vector<int> b(n2);
        for(int i=0;i<n1;i++)a[i]=v[i];
        for(int i=0;i<n2;i++)b[i]=v[i+n1];

        mergeS(a);
        mergeS(b);
        c+=count(a,b);
        merger(a,b,v);
        return c;

        
            }
   
int main(){
    vector<int>v={2,4,3,5,1};
   cout<< mergeS(v);
   cout<<endl;

    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";

return 0;
}