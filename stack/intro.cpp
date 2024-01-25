#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
   // cout<<st.size();
    st.push(10);
    //cout<<st.size();
    st.push(99);
    //cout<<st.top();
    st.push(88);
    st.push(77);
    st.push(66);

    // while(st.size()!=0){
    //     // stack becomes empty
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    stack<int> temp;
    while(st.size()!=0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()!=0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<st.size()<<" "<<temp.size();

}