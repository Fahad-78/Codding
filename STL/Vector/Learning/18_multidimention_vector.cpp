#include<bits/stdc++.h>
using namespace std;

int main(){
    vector< vector<int> > v;

    vector<int> v1 = {2, 3, 4};
    vector<int> v2 = {2, 3, 4, 5, 6};
    vector<int> v3 = {7 , 8};
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    for(auto u:v){
        for(auto g:u){
            cout<< g <<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}