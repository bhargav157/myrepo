#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &v,int s,int e){
    // cout<<s<<" "<<e;
    // cout<<endl;
    int pivot=v[(s+e)/2];
    int count=0;
    for(int i=s;i<=e;i++){
        if(i==(s+e)/2)continue;
        if(v[i]<pivot)count++;
    }
    
    int cIdx=count+s;
    //cout<<count<<endl;
//for(int i=s;i<=e;i++)cout<<v[i]<<" ";
    swap(v[cIdx],v[(s+e)/2]);
         
        // cout<<endl;
    int i=s;
    int j=e;
    while(i<cIdx && j>cIdx){
        if(v[i]>pivot && v[j]<=pivot){
            swap(v[i],v[j]);
            i++;j--;
        }
        else if(v[i]<pivot)i++;
        else if(v[j]>pivot)j--;
    }
        // for(int i=s;i<=e;i++)cout<<v[i]<<" ";
        // cout<<endl;
    return cIdx;
}

int quickk(vector<int> &v,int s,int e,int k){
    int n=v.size();
    // for(int i=s;i<=e;i++)cout<<v[i]<<" ";
     
    int pi=partition(v,s,e);
    // cout<<pi<<"*"<<s<<"#"<<e<<endl;
    
    
    

    //cout<<pi<<"*"<<s<<"#"<<e<<endl;    
   // for(int i=0;i<=5;i++)cout<<v[i]<<" ";
    //cout<<endl;
    if(pi+1==k)return pi;

    
     if(pi+1>k) quickk(v,s,pi-1,k);
    else if(pi+1<k) quickk(v,pi+1,e,k);

}
int main(){
    vector<int> v={5,8,4,3,6,7};
    int k;
    cin>>k;
    int a=quickk(v,0,v.size()-1,k);
    cout<<v[a];
   

return 0;
}