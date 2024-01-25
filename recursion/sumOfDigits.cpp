#include<bits/stdc++.h>
using namespace std;
void ans(int n,int sum){
    if(n==0){
        cout<<sum;
        return;
    }
    sum+=n%10;
    ans(n/10,sum);
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    ans( n,sum);

return 0;
}