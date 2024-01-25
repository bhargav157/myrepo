#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    int count=1;
    int max=0;
    char ans;
    sort(s.begin(),s.end());
    
    cout<<s<<endl;
    for(int i=0;i<s.size()-1;i++){

        if(s[i]==s[i+1])count++;
        else if(count>=max){
            max=count;
            count=1;
            
        }
        //cout<<i<<" "<<max<<" "<<count <<endl;
    }
    
    for(int i=0;i<s.size();i++){

        if(s[i]==s[i+1]){count++;}
        else if(count==max){
            cout<<s[i]<<" "<<max<<endl;
            count=1;
        }
    }
    

    
   
return 0;
}