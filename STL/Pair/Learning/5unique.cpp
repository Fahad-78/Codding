#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
    optimize();

    vector< pair< string, int>> v;

    v.push_back({"Shahriar" , 21});
    v.push_back({"momo" , 13});
    v.push_back({"sharif" , 34});
    v.push_back({"Shahriar" , 35});
    v.push_back({"sharif" , 34});
    v.push_back({"Shahriar" , 21});
    v.push_back({"momo" , 13});


    sort(v.begin(), v.end());
    int sz = unique(v.begin() , v.end())-v.begin();

    for(int i=0; i<sz; i++) cout<< v[i].first << ' ' << v[i].second <<endl;

    return 0;
}