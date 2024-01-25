#include<bits/stdc++.h>
using namespace std;
void para(int n,int op,int cl,string str){
    if(op==cl && op==n ){
        cout<<str<<" ";
        return;
    }
    if(op<n)para(n,op+1,cl,str+'(');
    if(cl<op)para(n,op,cl+1,str+')');

}
int main(){
    int n;
    cin>>n;
    string str="";
    int op=0;
    int cl=0;
    para(n,op,cl,str);

return 0;
}