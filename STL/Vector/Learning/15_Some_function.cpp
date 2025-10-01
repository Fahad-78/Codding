#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2, 3, 4, 5};

    cout<<v.back() <<endl;
    v.pop_back();

    cout<<v.back()<<endl;

    vector<int> vb = {2, 3, 4, 5, 6, 7, 8};

    cout<< *vb.begin() <<endl; //O(1)
    vb.erase( vb.begin() ); //O(n)
    for(auto ub:vb){
        cout<<ub<<" ";
    }
    cout<<endl;
}