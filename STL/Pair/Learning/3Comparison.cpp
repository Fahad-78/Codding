#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
    optimize();

    pair<int , int> p1 , p2;
    p1 = {2, 3};
    p2 = {3, 1};

    if(p1<p2) cout<<"P1 is small!\n";
    else cout<<"P2 is small!\n";

    pair<int , int> p = min(p1 , p2);
    cout<< p.first <<" "<< p.second<<endl;
}