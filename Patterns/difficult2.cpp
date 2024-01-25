#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int a=1;
for(int i=1;i<=n;i++)cout<<" ";
cout<<"*";
cout<<endl;
for(int i=1;i<n;i++){
    for(int k=1;k<=n-i;k++)cout<<" ";
    cout<<"*";
    for(int l=1;l<=a;l++){
        if(l==(a/2+1))cout<<"*";
        else cout<<" ";
    }a+=2;
    cout<<"*";

    cout<<endl;
}

int b=2*n-1;
for(int i=1;i<=(2*n+1);i++)cout<<"*";
cout<<endl;
for(int i=1;i<=n;i++){
 for(int j=1;j<=i;j++)cout<<" ";
    cout<<"*";
     for(int k=1;k<b-1;k++){
        if(k==((b-1)/2))cout<<"*";
        else cout<<" ";
    }
      if(i<n)cout<<"*";
     cout<<endl;
      b-=2;
}



}