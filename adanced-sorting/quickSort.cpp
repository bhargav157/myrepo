#include<bits/stdc++.h>
using namespace std;
int part(vector<int>&v,int s,int e){
    int pivot=v[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        //if(i==s)continue;
        if(v[i]<=pivot)count++;
    }
    int pivotIdx=count+s;
    swap(v[pivotIdx],v[s]);
    int i=s;
    int j=e;
    while(i<pivotIdx && j>pivotIdx){
        if(v[i]<=pivot)i++;
        if(v[j]>pivot)j--;
        if(v[i]>pivot && v[j]<=pivot){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        

        
    }
    return pivotIdx;
}
void quickS(vector<int> &v,int s,int e){
    if(s>=e)return;
    int pi=part(v,s,e);

    quickS(v,s,pi-1);
    quickS(v,pi+1,e);
}
int main(){
    vector<int> v={5,1,8,2,7,6,3,4};
    //for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    quickS(v,0,v.size()-1);
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";

return 0;
}