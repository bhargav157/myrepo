#include<bits/stdc++.h>
using namespace std;
string cns(int n,string s,int &count){
    if(n==0){
      
        return s;
    }
    int ld=n%10;
    n/=10;
    int ldd=n%10;
    if(ld==ldd){
        count++;
        return cns(n,s,count);}
    else {
       string p=to_string(ld);
       string q=to_string(count);
       string r=p+q;
        count=1;
        return cns(n,s+r,count);
    }

}
int main(){
    int n;
    cin>>n;
    string s="";

    int count=1;
   string w=cns(n,s,count);
   reverse(w.begin(),w.end());
   cout<<w;

return 0;
}