#include<bits/stdc++.h>
using namespace std;
void print(int n,int i){
    
    cout<<i;
    if(i<1)return;
    else if(i<=n)print(n,i+1);
    else print(n,i-1);
    
}
int main(){
    int n;
    cin>>n;
    int i=0;
    print(n,i);

return 0;
}