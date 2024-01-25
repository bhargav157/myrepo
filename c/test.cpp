#include<bits/stdc++.h>
using namespace std;
class A{
    private:
    int a_priv;
    public:
void setter(int x){
    a_priv=x;
}
    friend void show(A &c);
};
void show(A &c){
 cout<<c.a_priv;
 }
int main(){
    A a;
    a.setter(33);
    show(a);
    
    

return 0;
}