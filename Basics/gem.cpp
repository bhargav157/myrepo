#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[4][4]={{1,2,3,4},{4,5,6,7},{8,9,10,11},{12,13,14,15}};

  int n=4;

  int i=0,j=0;
  while(i!=n){
    cout<<arr[i][j]<<" ";
    if(i%2==0){
      if(j!=n-1)j++;
      else i++;
    }
    else {
      if(j!=0)j--;
      else i++;
    }
  }

return 0;
}