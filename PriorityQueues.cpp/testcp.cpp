#include<bits/stdc++.h>
using namespace std;
void helper(vector<vector<int>> &ans,vector<vector<int>> matrix){
       for(int i=0;i<matrix.size();i++){
           for(int j=0;j<matrix[0].size();j++){
               ans[j][i]=matrix[i][j];
           }
       }
       }
       vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       int n=matrix.size();
       int m=matrix[0].size();
       
       vector<vector<int>> ans(n,vector<int> (m));
        helper(ans,matrix);
        return ans;
        
    }
int main(){
    
   vector<vector<int> > matrix(2,vector<int>  (3));
   for(int i=0;i<matrix.size();i++){
           for(int j=0;j<matrix[0].size();j++){
               cin>>matrix[i][j];
           }
       }
    
    vector<vector<int> > matri(3,vector<int>(2));
    matri=transpose(matrix);
    cout<<"OK";

return 0;
}