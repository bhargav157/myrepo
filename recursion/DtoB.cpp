#include<bits/stdc++.h>
using namespace std;
vector<int> dtb(int n,vector<int>&v){
    if(n==1){
        v.push_back(1);
        return v;
    }
    
    dtb(n/2,v);
    v.push_back(n%2);

}
int main(){
int n;
cin>>n;
vector<int>v;
    dtb( n,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }

return 0;
}