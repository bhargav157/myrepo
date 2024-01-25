#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    if(b==1)return 2;
    int s=power(a,b/2);
    if(b%2==0)return s*s;
    else return s*s*2;
    }
int main(){
cout<<power(2,5);

return 0;
}