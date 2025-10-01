#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {5, 3, 3, 4, 1, 1, 2};

    //sort( v.begin() , v.end() , greater<int>() );
    sort( v.rbegin() , v.rend() );

    for(auto u:v){
        cout<< u <<" ";
    }
    cout<<endl;
}