#include<bits/stdc++.h>
using namespace std;
class node{
    public:

    int val;
    node* next;

    node(int v){
        val=v;
        next=NULL;
    }
    
};
class linkedList{
    public:
    node* head;
    node* tail;
    int size;
    linkedList(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    
    void insertTail(int a){
        node* temp = new node(a);
        if(size==0){
            head=tail=temp;

        }
        else {
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void display(){
        node* temp= head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void insertHead(int a){
        node* temp=new node(a);
        if(size>0){
            temp->next=head;
            head=temp;
        }
        else {
            head=tail=temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int v){
        node* temp=new node(v);
        node* t=head;
        if(idx<0 || idx>size){
            cout<<"INVALID!!";
            return;
        }
        else if(idx==0)insertHead(v);
        else if(idx==size)insertTail(v);
        else{
            for(int i=1;i<idx;i++){
                t=t->next;
            }
            temp->next=t->next;
            t->next=temp;
            size++;
        }
        
       
    }
    void getEle(int idx){
        node* t=head;
        if(idx<0 || idx>=size){
            cout<<"INVALID!!";
            return;
        }
        else if(idx==0){
            cout<<head->val;
            cout<<endl;
            return;
        }
        else if(idx==size-1){
            cout<<tail->val;
            cout<<endl;
            return;
        }
        else{
            for(int i=1;i<=idx;i++){
                t=t->next;
            }
            cout<<t->val;
            cout<<endl;
            return;
        }
    }

    void delHead(){
        if(size==0){
            cout<<"EMPTY LIST!!";
            cout<<endl;
            return;
        }
        else if(size>1){
            head=head->next;
            size--;
        }
    }
    void delTail(){
        node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;

        size--;
    }
    void delIdx(int idx){
        node* temp=head;
        if(idx<0 || idx>=size){
            cout<<"INVALID!!";
            cout<<endl;
            return;
        }
        else if(idx==0)delHead();
        else if(idx==size-1)delTail();
        else{
            for(int i=1;i<idx;i++)temp=temp->next;
            temp->next=temp->next->next;
            size--;
        }
        
        
    }
    int sizer(){
        node* temp=head;
        int count=1;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }

    

};
int main(){
    linkedList ll;
    ll.insertTail(33);
    ll.insertTail(44);
    ll.display();
    ll.insertTail(55);
    ll.display();
    ll.insertHead(66);
    ll.insertHead(22);
    ll.display();
    ll.insertAtIdx(2,77);
    ll.display();
    ll.insertAtIdx(0,11);
    ll.display();
    ll.insertAtIdx(8,99);
     ll.display();
    ll.insertAtIdx(5,111);
     ll.display();
    ll.getEle(0);
    ll.getEle(8);
     ll.getEle(5);
    ll.getEle(-22);
    ll.delHead();
    ll.display();
    ll.delTail();
    ll.display();
     ll.delIdx(2);
     ll.display();
     ll.delIdx(0);
     ll.display();
     ll.delIdx(5);
     ll.display();
    cout<<ll.size;
    
return 0;
}