#include<bits/stdc++.h>
using namespace std;
void insertAt(stack<int> &st,int a,int val){
    stack<int> temp;
    while(st.size()!=2){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()!=0){
        st.push(temp.top());
        temp.pop();
    }

}
void print(stack<int> st){
    stack<int> temp;
    while(st.size()!=0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()!=0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    print (st);
    insertAt(st,2,22);
    print (st);

}