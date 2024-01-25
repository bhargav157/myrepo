#include<bits/stdc++.h>
using namespace std;

   
    void upheapify(int idx,int arr[]){
        while(idx>0){
            int pa=(idx-1)/2;
            if(arr[idx]>arr[pa])swap(arr[idx],arr[pa]);
            else break;
            idx=pa;
        }
    }
    void downheapify(int idx,int bound,int arr[]){
        while(idx<bound){
            int lc=2*idx+1;
            int rc=2*idx+2;
            if(lc>bound)break;
            int maxi=idx;
            if(arr[lc]>arr[idx])maxi=lc;
            if(rc<bound && arr[rc]>arr[maxi])maxi=rc;
            if(idx!=maxi){
                swap(arr[maxi],arr[idx]);
                idx=maxi;
            }
            else break;
            

        }
    }
    void convert(int arr[],int i){
        for(int j=0;j<=i;j++)upheapify(j,arr);
    }
    void push(int c,int arr[],int &i){
        i++;
        arr[i]=c;
        upheapify(i,arr);
    }
    void display(int arr[],int &i){
        for(int j=0;j<=i;j++)cout<<arr[j]<<" ";
    }
    void pop(int arr[],int &i){
        swap(arr[0],arr[i]);
       i--;
        downheapify(0,i,arr);
        
    }
    void sort(int arr[],int &i){
        int n=i;
        for(int j=0;j<=n;j++ ){
            swap(arr[0],arr[i]);
            i--;
            downheapify(0,i,arr);
        }
    }
   
    

int main(){
//     int arr[50];
//    int  i=-1;
//    push(22,arr,i);
//    push(-22,arr,i);
//    push(2,arr,i);
//    push(38,arr,i);
//    push(10,arr,i);
//    push(1,arr,i);
//    push(0,arr,i);
//    pop(arr,i);
//    sort(arr,i);
//    //push(46,arr,i); 
// //    pop(arr,i);
//   //cout<<i;
// //    pop(arr,i);
// //    pop(arr,i);
//   // display(arr,i);
//  // int n=sizeof(arr)/sizeof(arr[0]);
//   for(int j=0;j<5;j++)cout<<arr[j]<<" ";
int arr[]={2,6,-1,77,22,34};
int arr2[]={33,99,64,22,110};
int i=5;
convert(arr,i);  
display(arr,i);

   
    

return 0;
}