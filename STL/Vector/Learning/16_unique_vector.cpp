#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2, 3, 5, 5, 7, 7, 1};

    sort(v.begin(), v.end());

    for(auto u:v){
        cout<<u<<" ";
    }
    cout<<endl;

    int size = unique(v.begin(), v.end()) - v.begin();

    for(auto u:v) {
        cout<<u<<" ";
    }
    cout<<endl;

    cout<< size<<endl;
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}