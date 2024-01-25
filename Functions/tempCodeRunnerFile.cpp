#include<bits/stdc++.h>
using namespace std;
int main(){

    
    int size=0;

   int array[4][5]; 
   for(int i=0;i<4;i++){
    for(int j=0;i<5;j++){
       cin>> array[i][j];
       if(array[i][j]!=0)size++;
    }
   }
   for(int i=0;i<size;i++){
    for(int j=0;j<3;j++){
        cout<<array[i][j];
    }cout<<endl;
   }

    int p=0;
    int q=0;
   int sparseMatrix[3][size];
   for(int i=0;i<4;i++){
    for(int j=0;j<5;j++){
        if(array[i][j]!=0 ){
            sparseMatrix[p][0]=i;
            sparseMatrix[p][1]=j;
            sparseMatrix[p][2]=array[i][j];
            p++;
        }
        
        
    }
   }

   
   
   
   }
