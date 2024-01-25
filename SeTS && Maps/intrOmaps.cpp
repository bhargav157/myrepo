#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
unordered_map<string,int> m;

//always (key,value)pairs are inserted in these kind of maps
pair<string,int> ss;
ss.first="bhargav";
ss.second=1;

m.insert(ss);//valid insertion
//m.insert("bharg",1); //--not valid insertion in cpp only valid in java

pair<string,int> s2;
s2.first="harsh";
s2.second=2;

pair<string,int> s3;
s3.first="raghav";
s3.second=3;

m.insert(s2);
m.insert(s3);

//printing 

for(pair<string,int> ele : m){
    cout<<ele.first<<" "<<ele.second<<endl;
}
cout<<endl;

// printing again using auto keyword
for(auto ele : m){
    cout<<ele.first<<" "<<ele.second<<endl;
}
cout<<endl;

// another method of insertion
//----- m[key]=value

m["atulya"]=2;

// deleting m.erase[key];

m.erase("harsh");
cout<<m.size();

//searching elements in map
// m.find(key)!=m.end()






return 0;
}