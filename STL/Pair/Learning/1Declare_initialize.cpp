#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

/*
struct r{
    int first,second;
};
*/

int main(){
    optimize();

    /*
    r ru;
    ru.first = 45;
    ru.second = 56;
    */

    //Pair is the replacement and shortcut of struct.
    pair<int, int> p;
    p.first = 78;
    p.second = 55;

    pair<string, int> q;
    q.first = 12;
    q.second = 23;

    pair<string, vector<int>> s;
    s.first = "Fahad Sarker";
    s.second = {1, 2, 3};
    cout<< s.first <<endl;

    for(auto u:s.second){
        cout<< u <<" ";
    }
    cout<<endl;

    return 0;
}