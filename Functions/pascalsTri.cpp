#include<bits/stdc++.h>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++)fact*=i;
    return fact;
}
int combination(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
           if( j==i || j==0) cout<<1;
           else cout<<combination(i,j);
        }cout<<endl;
    }
}