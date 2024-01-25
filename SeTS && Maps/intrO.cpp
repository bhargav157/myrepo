#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    // random insertion all operations O(1)
    // search ,insert, erase , size,
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    // printing-- foreach loop

    for(int ele : s){
        cout<<ele<<" ";
    }

    //stores only unique elements -- just like real sets

    //**searching in set;
    int target=4;

// if element doesnt exists in set then it returns s.end()

    if(s.find(target)!=s.end())cout<<"yes";
    else cout<<"no";



return 0;
}