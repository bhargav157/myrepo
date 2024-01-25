#include<bits/stdc++.h>
using namespace std;
void subStr(vector<int> &v, int idx,vector<int> s,int k){
    
    if(idx==v.size()){
   if(s.size()==k) {for(int i=0;i<s.size();i++)cout<<s[i];
    cout<<endl;}
        return;
    }
    subStr(v,idx+1,s,3);
    s.push_back(v[idx]);
    subStr(v,idx+1,s,3); 
    


}
int main(){
    vector<int> v={1,2,3,4};
    vector<int> s;
    
    subStr(v,0,s,3);

return 0;
}