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
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        int a=1;
        for(int j=0;j<=i;j++){
            cout<<a;
            a=a*(i-j)/(j+1);
        }cout<<endl;
    }
   
}