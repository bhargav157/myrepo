#include<bits/stdc++.h>
using namespace std;
int rev(int n){
    static int s=0;
    if(n<=0)return s;
    int dig=n%10;
    s=s*10;
    s+=dig;
     rev(n/10);

}
int main(){
    int n;
    cin>>n;
    int s=0;
    cout<<rev(n);

return 0;
}