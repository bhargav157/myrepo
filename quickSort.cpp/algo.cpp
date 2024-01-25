#include<bits/stdc++.h>
using namespace std;
int  partition(vector<int> &v,int st,int end){
    int n=v.size();
    int count =0;
    for(int i=st;i<=end;i++){
        if(v[i]>v[st])count++;
    }
    int crt=(end)-count;
    swap(v[st],v[crt]);

    int i=st,j=crt+1;
    while(i<crt && j<=end){
        if(v[i]>v[crt] && v[j]<=v[crt])swap(v[i],v[j]);
        else if(v[i]<=v[crt])i++;
        else j++;
    }
    return crt;



}
int main(){
vector<int> v(8);
for(int i=0;i<8;i++)cin>>v[i];
partition(v,4,7);
for(int i=0;i<8;i++)cout<<v[i]<<" ";

return 0;
}