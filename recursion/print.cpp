#include<bits/stdc++.h>
using namespace std;
void print(int n){
    //base case
    if(n==1){
        cout<<1;
        return;
    }
     //recursive call
     else {
        cout<<n;
        print(n-1);
         }
     
    
}
//using a exttra variable
void print1(int i,int n){
    if(i>n)return;
    cout<<i;
    print1(i+1,n);
}
int main(){
    int n;
    cin>>n;
    print(n);

return 0;
}