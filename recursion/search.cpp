#include<bits/stdc++.h>
using namespace std;
bool find(vector<int> v,int idx,int t){
    int n=v.size();
     bool flag=false;
    if(idx==n){
        return flag;
    }
    if(v[idx]==t){
        flag=true;
        return flag;
    }
    else find(v,idx+1,t);
}
int main(){
    vector<int> v={1,2,3,4,5,6,7};
    int target;
    cin>>target;
    if(find(v,0,target))cout<<"yes";
    else cout<<"no";

return 0;
}