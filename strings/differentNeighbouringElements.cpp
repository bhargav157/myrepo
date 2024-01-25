#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    int count=0;
    
    if(s[0]!=s[1])count++;
    if(s[s.length()-1]!=s[s.length()-2])count++;
    if(s.length()==2 && s[0]!=s[1]){
            count =1;
           
        }
    if(s.length()==1){
        count=0;
       
    }
    for(int i=1;i<s.length()-1;i++){
        
        if(s[i]!=s[i+1] && s[i]!=s[i-1])count++;
        
        
    }
    cout<<count;


}   