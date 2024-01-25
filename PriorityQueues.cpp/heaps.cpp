#include<bits/stdc++.h>
using namespace std;
class MAxHeap{
    vector<int> hp;
    int i;
    public:
    void upheapify(int idx){
        while(idx>0){
            int pa=(idx-1)/2;
            if(hp[pa]<hp[idx]){
                swap(hp[pa],hp[idx]);
                idx=pa;
            }
            else break;
        }
        
    }
    void downheapify(int idx,int bound){
        while(idx<hp.size()){
            int lc=2*idx+1;
            int rc=2*idx+2;
            if(lc>=bound)break;
            int maxEl=idx;
            if(hp[lc]>hp[maxEl]){
                maxEl=lc;
            }
            if(rc<bound && hp[rc]>hp[maxEl]){
                maxEl=rc;
            }
            if(maxEl!=idx){swap(hp[maxEl],hp[idx]);
            idx=maxEl;}
            else break;
        }
    }
    void push(int element){
        hp.push_back(element);
        upheapify(hp.size()-1);
    }
    bool empty(){
        return hp.size()==0;
    }
    void display(){
        for(int j=0;j<hp.size();j++)cout<<hp[j]<<" ";
    }
    void pop(){
        if(empty())return;
        swap(hp[0],hp[hp.size()-1]);
       // hp.pop_back();
        i--;
        if(!empty())downheapify(0,i);
    }
    MAxHeap(){}
    MAxHeap(vector<int> v){
        hp=v;
        int n=hp.size();
        int i=n;
        for(int j=n/2;j>=0;j--)downheapify(j,i);
    }
    vector<int> heapsort(){
        int sz=hp.size();
        while(sz>0){
            int el=0;
            swap(hp[el],hp[i]);
            i--;
            sz--;
            downheapify(0,i);
        }
        
        return hp;
    }
};
void heapsort(vector<int> &v){
    MAxHeap hp(v);
   v= hp.heapsort();
   
}
int main(){
    // MAxHeap hp;
    // hp.push(3);
    // hp.push(4);
    // hp.push(11);
    // hp.push(9);
    // hp.push(14);
    // hp.push(-1);
    // hp.push(30);
    // hp.push(44);
    // hp.push(50);
    // hp.display();
    vector<int> v={3,5,7,9,1,2};
    heapsort(v);
    
    

return 0;
}