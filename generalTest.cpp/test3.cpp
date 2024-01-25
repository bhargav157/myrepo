#include<bits/stdc++.h>
using namespace std;
void bookin(vector<vector<int>> &bookings,int n){


vector<int> ans(n,0);

        for(int i=0;i<bookings.size();i++){
            for(int j=bookings[i][0]-1;j<bookings[i][1];j++){
                ans[j]+=bookings[i][2];
            }
        }
        for(int i=0;i<n;i++)cout<<ans[i]<<" ";
}
int main(){
    vector<vector<int>> abc={{1,2,10},{2,3,20},{2,5,25}};
    int n=2;
    //cout<<abc.size();
    bookin(abc,5);

return 0;
}