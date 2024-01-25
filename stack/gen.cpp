#include<bits/stdc++.h>
using namespace std;


class Stack{
int arr[100];
int size=0;
int idx=-1;

public:

void push(int a){
    if(size==100)cout<<"Overflow"<<endl;
    else {
        idx++;
        arr[idx]=a;
        size++;
    }
}

void pop(){
    idx--;
    size--;
}

void display(){
    if(size==0)cout<<"cant display"<<endl;
    for(int i=0;i<=idx;i++)cout<<arr[i]<<" ";
    cout<<endl;
}

int top(){
    return arr[idx];
}

};

int main(){

    Stack s;
    s.push(44);
    s.push(33);
    s.push(11);
    s.push(46);
    s.pop();
    s.display();
    cout<<s.top();

return 0;
}