#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node *next;
    

    Node(int a){
        value=a;
        next=NULL;}

    Node (){

    };
    };
    class LinkedList{
        Node *head;
        Node *tail;
        int size;

        
        public:
        LinkedList(){
            head=NULL;
            tail=NULL;
            size=0;
        }

        void Display(){
            if(size==0)cout<<"NO"<<endl;
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->value<<" ";
                temp=temp->next;
            }
        }

        void insertBegin(int a){
            if(size==0){
                Node* temp=new Node(a);
                head=tail=temp;
            }
            else {
                Node* temp=new Node(a);
                temp->next=head;
                head=temp;

            }
            size++;
        }

        void insertEnd(int a){
            if(size==0){
                Node* temp=new Node(a);
                head=tail=temp;
            }
            else {
                Node* temp=new Node(a);
                tail->next=temp;
                tail=temp;
            }
            size++;
        }

        void insertIdx(int a,int val){
            if(a==0)insertBegin(val);
            else if(a==size)insertEnd(val);
            else {
                Node* temp=new Node(a);
                Node* temp1=head;
                for(int i=1;i<a;i++){
                    temp1=temp1->next;
                }
                temp->next=temp1->next;
                temp1->next=temp;
            }
            size++;
        }

        void 

    };

int main(){
    LinkedList ll;
    ll.insertBegin(11);
    ll.insertIdx(1,33);
    ll.insertEnd(22);
    ll.Display();

return 0;
}