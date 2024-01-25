#include<bits/stdc++.h>
using namespace std;
int main(){
    //int 6;
    vector<string> v(6);
    for(int i=0;i<6;i++)cin>>v[i];

    int max=INT_MIN;
    int idx=-1;
    for(int i=0;i<6;i++){
        if(max<stoi(v[i])){
        max=stoi(v[i]);
        idx=i;
        }

    }
    cout<<max<<" "<<v[idx];

return 0;
}