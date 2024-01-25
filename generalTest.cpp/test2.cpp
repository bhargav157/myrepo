#include<bits/stdc++.h>
using namespace std;
int yesss(vector<int> & nums){
    int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        for(int i=1;i<=(n-2);i++){
            cout<<nums[i-1]<<" "<<(nums[n-1]-nums[i])<<endl;

        }
        return -1;
        
}
int main(){
vector<int> nums={2,1,-1};
yesss(nums);
//for(int i=0;i<6;i++)cout<<nums[i]<<" ";
return 0;
}