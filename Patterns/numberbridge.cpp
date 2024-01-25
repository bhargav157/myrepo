#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a=1;
    cin>>n;
    for(int i=1;i<=2*n-1;i++)cout<<i;
    cout<<endl;
    for(int i=1;i<=(n-1);i++){
    int b=1;

        for(int j=1;j<=(n-i);j++)cout<<b++;
       
        for(int k=1;k<=a;k++)cout<<" ";
        a+=2;
        b+=i;;
        
        for(int l=1;l<=(n-i);l++)cout<<b++;
        cout<<endl;

    }
}