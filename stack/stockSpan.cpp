#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,80,60,81,70,60,75,85};
    int span[8];
    stack<int> st;
    span[0]=1;
    st.push(0);
    for(int i=1;i<=7;i++){
        while(st.size()>0 && arr[st.top()]<=arr[i])st.pop();
        if(st.size()!=0)span[i]=i-st.top();
        else span[i]=i+1;
        st.push(i);
    }
    for(int i=0;i<=7;i++)cout<<span[i]<<" ";
return 0;
}