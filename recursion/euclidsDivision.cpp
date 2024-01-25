#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b){
    if(b%a==0)return a;
    else (hcf(b%a,a));
}
int main(){
    int n,m;
    cin>>n>>m;
   cout<< hcf(n,m);
return 0;
}