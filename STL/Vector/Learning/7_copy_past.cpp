#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2, 3, 4, 5};

    vector<int> tmp;

    tmp = v;

    cout<<"Size of tmp: "<<tmp.size()<<endl;
    cout<<"Values of tmp: ";
    for(int i=0; i<tmp.size(); i++){
        cout<<tmp[i]<<" ";
    }
    cout<<endl;

    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Values of v: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}