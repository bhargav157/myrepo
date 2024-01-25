#include<bits/stdc++.h>
using namespace std;
void permut(string orig,string s){
    if(orig==""){
    cout<<s<<" ";
    return;}
    string a="";
    
   
    for(int i=0;i<orig.size();i++){
        char ch=orig[i];
        permut(orig.substr(0,i)+orig.substr(i+1),s+ch);
    }
}
void permuta(string ori,string s){
    if(ori==""){
        cout<<s<<" ";
        return;
    }
    for(int i=0;i<ori.size();i++){
        permuta(ori.substr(0,i)+ori.substr(i+1),s+ori[i]);
    }
}

int main(){
    string orig="abc";
    string s="";
    permuta(orig,s);
   // cout<<orig.substr(0,0);
    

return 0;
}