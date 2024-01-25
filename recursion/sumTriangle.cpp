#include<bits/stdc++.h>
using namespace std;
void printSum(vector<int> v,int &s){
    int n=s;
    if(n<1)return;

    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<endl;
    
    for(int i=0;i<n;i++){
        v[i]=v[i]+v[i+1];
    }
   
    
    
    
    //v.push_back(1);
    s-=1;
    printSum(v,s);

    

}
int main(){
    vector<int> v={5,4,3,2,1};
    int s=5;
    printSum(v,s);


return 0;
}