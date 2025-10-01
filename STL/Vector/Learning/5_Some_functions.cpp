#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 5, 6, 7};
    cout<<"Before clear: ";
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.clear();

    cout<<"After clear: ";
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Empty or not: "<<v.empty()<<endl; //If empty return 1 otherwise 0

    v = {1,2,3,4};
    cout<<"Before: "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.resize(10); //Increase size of the vector without adding any elements

    cout<<"After: "<<v.size()<<endl;
    cout<<"Values: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}