#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> s(100,0);
    vector<int> q(100,0);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int b[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==0){
                s[i]=1;
                q[j]=1;

            }
            
        }
    }
    for(int i=0;i<100;i++){
        if(s[i]==1){
            for(int j=0;j<m;j++)a[i][j]=0;

        }
        if(q[i]==1){
            for(int k=0;k<m;k++)a[k][i]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cout<<a[i][j]<<" ";
        cout<<endl;
    }



}



