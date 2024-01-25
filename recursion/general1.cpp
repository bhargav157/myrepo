#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,3,4};
int n=4;
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        int dig=0;
        for(int k=j;;k++){cout<<arr[k];
            dig++;
            if(dig==i+1)break;
        }
        cout<<" ";
    }
}
return 0;
}