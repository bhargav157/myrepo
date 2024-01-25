#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int v[n];

        for(int i=0;i<n;i++)cin>>v[i];

        int a,b,c;

        a=INT_MIN;b=INT_MIN;c=INT_MIN;
        for(int i=0;i<n;i++){
            if(v[i]>a){
                b=a;
                a=i;
                
            }
            else if(v[i]> b){
                c=b;
                b=i;
            }
            else c=i;
        }
        cout<<a<<" "<<b;
        cout<<endl;

        
    }

return 0;
}