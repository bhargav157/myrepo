#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[6]={10,6,8,5,11,9};
int max;
int ans[6];
for(int i=0;i<=5;i++){
    int count=0;max=INT_MIN;
    for(int j=i+1;j<=5;j++){
        if(arr[j]>max && arr[i]>max){
            count++;
            max=arr[j];
        }
    }
    ans[i]=count;

}

for(int i=0;i<=5;i++)cout<<ans[i]<<" ";
return 0;
}