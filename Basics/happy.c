#include<stdio.h>
int A[5];
int top = -1;
void Push(int x){
    if (top == (sizeof(A)/sizeof(A[0])) -1){
        printf("Error stack is full\n");
        return;
    }
    A[++top]= x;
}
void Pop() {
    if(top == -1){
        printf("The stack is already empty reatrd\n");
        return;
    }
    top--;
}
// int dd(top){
//     return A[top];
// }
void print(){
    int i;
    printf("stack: ");
    for(i= 0;i<=top;i++){
        printf("%d", A[i]);
        printf("\n");}
}
int main(){
    Push(2);
    print();
    Push(8);
    print();
    Push(3);
    print();
    Pop();
    print();}