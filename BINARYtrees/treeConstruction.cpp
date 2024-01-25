#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node* left;
    node* right;
    

    node(int x): val(x),left(NULL),right(NULL){}
};
node* construct(int arr[],int n){
    queue<node*> q;
    node* root=new node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        node* temp=q.front();
        q.pop();

        node* l;
        node* r;

        if(arr[i]!=INT_MIN)l=new node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN)r=new node(arr[j]);
        else r=NULL;

        temp->left=l;
        temp->right=r;

        if(l!=NULL)q.push(l);
        if(r!=NULL)q.push(r);

        i+=2;
        j+=2;
        
        
    }
    return root;
}
void display(node* root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);

}


int main(){
//construct
int arr[]={1,2,3,4,5,6,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
int n=sizeof(arr)/sizeof(arr[0]);
node* root= construct(arr,n);

display(root);



return 0;
}