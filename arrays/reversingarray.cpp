#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int m=0;
    int l=n-1;
    while(m<=l){
        int temp=array[l];
        array[l]=array[m];
        array[m]=temp;
        l--,m++;
    }
     for(int i=0;i<n;i++){
        cout<<array[i];
    }

}