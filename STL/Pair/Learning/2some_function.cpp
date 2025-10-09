#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
    optimize();

    pair<int , int> p;
    p = make_pair(2, 3);
    cout<< p.first<<" "<<p.second<<endl;

    p.first++;
    cout<<p.first<<endl;

    pair<int , int> q;
    q = {7 , 8};
    cout<< q.first <<" "<< q.second<<endl;

    pair<string , vector<int>> s;
    s = {"Fahad Sarker" , {2 , 3 , 4}};
    cout<< s.first << endl;
    for(auto u:s.second){
        cout<< u << " ";
    }
    cout<< endl;
}