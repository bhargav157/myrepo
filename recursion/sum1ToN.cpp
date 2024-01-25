#include<bits/stdc++.h>
using namespace std;
int sum(int i,int n){
    int a=0;
    if(i>n)return a;
     a=i+sum(i+1,n);
    
}
int sum(int n){
    int a=0;
    if(n==0)return a;
    a=n+sum(n-1);
}
int main(){
    int n;
    cin>>n;
    int i=1;
   int b=sum(n);
   cout<<b;

return 0;
}