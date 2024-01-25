#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<string> v;
    stringstream ss(s);
    string temp;

    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    //  for(int i=0;i<v.size()-1;i++){
    //     cout<<v[i]<<" ";
    // }
    int count=1;
    int max=0;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]==v[i+1])count++;
        else if(count>=max){
            max=count;
            count=1;
        }
        //cout<<i<<" "<<count<<" "<<max<<endl;
    }
   
    // cout<<max;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i+1])count++;
        else if(count==max){
            cout<<max<<" "<<v[i]<<endl;
            count=1;
        }
    }

   


return 0;
}