#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &v){
    int n=v.size();
    int m=v[0].size();
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m/2;j++){ 
            int temp=v[i][j];
            v[i][j]=v[i][m-j-1];
            v[i][m-j-1]=temp;

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
   
}


int main(){
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    vector<vector<int>>t(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cin>>v[i][j];

    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j)swap(v[i][j],v[j][i]);
        }

    }
    rotate(v);

    
}