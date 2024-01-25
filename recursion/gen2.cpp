#include<bits/stdc++.h>
using namespace std;
void print(int n,int i){
    if(i>n)return;
    cout<<i<<endl;
    print(n,i+1);
    if(i!=n)cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    int i=1;
    print(n,i);

return 0;
}