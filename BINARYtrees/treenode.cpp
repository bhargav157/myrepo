#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node* left;
    node* right;
    

    node(int x): val(x),left(NULL),right(NULL){}
};

int size(node* root){
    if(root==NULL)return 0;
    return 1+size(root->left)+size(root->right);
}
int maxVal(node* root){
    if(root==NULL)return INT_MIN;
    int max2=max(maxVal(root->left),maxVal(root->right));
    return max(max2,root->val);
}
int main(){
    node *A=new node(1);
    node *B=new node(2);
    node *C=new node(3);
    node *D=new node(4);
    node *E=new node(5);
    node *F=new node(6);
    node *G=new node(7);

    A->left=B;
    A->right=C;
    B->left=D;
    B->right=E;
    C->left=F;
    C->right=G;

    cout<<maxVal(A);



return 0;
}