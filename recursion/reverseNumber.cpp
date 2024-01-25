#include<bits/stdc++.h>
using namespace std;
void ans(int n,int rev){
    if(n==0){
        cout<<rev;
        return;
    }
    rev=rev*10+n%10;
    ans(n/10,rev);
}
int main(){
    int n;
    cin>>n;
    int rev=0;
    ans(n,rev);


}