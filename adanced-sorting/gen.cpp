#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &v,int s,int e){
    int pivot=v[s+e/2];
    int count=0;
    for(int i=s;i<=e;i++){
        if(i==(s+e)/2)continue;
        if(v[i]>pivot)count++;
    }
    int cIdx=count+s;
    swap(v[cIdx],v[s+e/2]);
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
    return cIdx;
}

int main(){
    vector<int>a ={5,6,4,3,2,1};
    cout<<partition(a,5,5);
    

return 0;
}