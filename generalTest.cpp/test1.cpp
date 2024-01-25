#include<bits/stdc++.h>
using namespace std;
int isPresent(string s,vector<vector<string>>& paths){
    for(int i=0;i<paths.size();i++){
        if(paths[i][0]==s)return i;
    }
    return -1;
}
    string destCity(vector<vector<string>>& paths) {
        if(paths.size()==1)return paths[0][1];
       static int ans=0;
        string s = paths[ans][1];
         ans=isPresent(s,paths);
        if(ans==-1)return s;
       return destCity(paths);

        //s=paths[ans][1];
    }
int main(){
    vector<vector<string>> paths={ {"a","z"}};
    cout<<destCity(paths);

return 0;
}

