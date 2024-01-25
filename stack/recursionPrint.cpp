#include<bits/stdc++.h>
using namespace std;
void print(stack<int> &s){
    if(s.size()==0 )return;
    int x=s.top();
    cout<<x<<" ";
    s.pop();
    print(s);
    s.push(x);

}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    print(s);
    cout<<endl;
    cout<<s.size();
    
    cout<<5;
    

return 0;
}