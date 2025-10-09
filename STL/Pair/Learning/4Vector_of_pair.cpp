#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
    optimize();

    vector<pair<int , int>> v;

    int n;
    cin>> n;

    for(int i=0; i<n; i++){
        int a , b;
        cin>> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin() , v.end());

    for(auto u:v){
        cout<< u.first << " " << u.second << endl;
    }
    cout<< endl;
}