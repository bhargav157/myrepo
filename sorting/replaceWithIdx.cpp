#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int ans[n];
    int p=0;
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int idx=-1;
        for(int j=0;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                idx=j;
                
                
            }


        }
        arr[idx]=INT_MAX;
        ans[idx]=p++;
        
    }

    for(int i=0;i<n;i++)cout<<ans[i]<<" ";



return 0;
}

// much optimised

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)cin>>arr[i];

//     //int ans[n];
//     int p=n-1;
//     for(int i=0;i<n;i++){
//         int max=INT_MIN;
//         int idx=-1;
//         for(int j=0;j<n;j++){
//             if(arr[j]>max){
//                 max=arr[j];
//                 idx=j;
                
//             }
            
//         }
//         //cout<<max<<" ";
//        arr[idx]=p--;
//     }

//     for(int i=0;i<n;i++)cout<<arr[i]<<" ";



// return 0;
// }

// sir's Method to craete a extra array isVisited and mark min visited elemet via one and skip that in nxt