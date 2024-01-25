#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++)fact*=i;
    return fact;
}
int main(){
    int n,r;
    cin>>n>>r;
  cout<<factorial(n)/(factorial(r)*(factorial(n-r)));
}