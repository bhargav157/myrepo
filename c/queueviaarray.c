#include<stdio.h>
# define N 5
int Q[N];
int f=-1;
int r=-1;


void push(int val){
    if(f==-1 && r==-1){
        f=r=0;
        Q[r]=val;
    }
    else if((r+1)%N==f)printf("FULL");
    else {
        r=(r+1)%N;
        Q[r]=val;
    }
    
}
void pop(){
    if(f==-1 && r==-1)printf("EMPTY");
    else if(f==r)f=r=0;
    else f=(f+1)%N;
    }
void disply(){
    int i=f;
   if(f==-1 && r==-1)printf("EMPTY");
   
   while(i!=r){
    printf("%d",Q[i]);
    i=(i+1)%N;
   }
   printf("%d",Q[r]);
}
int peek(){
    if(f==-1 && r==-1)printf("EMPTY");
    return Q[f];
}

int main(){
    push(11);
    push(22);
    push(33);
    push(42);
    push(88);
   // push(99);
   //for(int i=0;i<5;i++)printf("%d",Q[i]);
   pop();
   pop();
   push(99);
   push(55);
   push(2222);
  
   disply();

}