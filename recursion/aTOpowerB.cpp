#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    int ans=1;
    if(b==0)return ans;
    ans=a*power(a,b-1);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);

return 0;
}