#include<bits/stdc++.h>
using namespace std;
void sym(int n,int k,int ans){
    if(n==1 && k==1){
        ans= 0;
        return;
    }
    if(k%2!=0)sym(n-1,k/2+1,ans);
    
    else sym(n-1,k/2,ans);
if(k%2!=0 && ans==0)ans=0;
else if(k%2!=0 && ans==1)ans=1;
else if(k%2==0 && ans==1)ans=0;
else if(k%2==0 && ans==0)ans=1;

if()
    

}
int main(){
    int n,k;
    cin>>n>>k;
    int ans=0;
    sym(n,k,ans);

return 0;
}