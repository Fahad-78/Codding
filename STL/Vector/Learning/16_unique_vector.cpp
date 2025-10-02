#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2, 3, 5, 5, 7, 7, 1};

    sort(v.begin(), v.end());

    for(auto u:v){
        cout<<u<<" ";
    }
    cout<<endl;

    int size = unique(v.begin(), v.end()) - v.begin(); //(iterator to end of unique range) - (iterator to the beginning) calculates the number of unique elements.
    //unique(v.begin(), v.end())  --> It does not return the vector. It returns an iterator that points to the position just after the last unique element.

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