#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    vector<string> v;
    v.push_back("Fahad");
    v.push_back("Arafat");
    v.push_back("Mredula");
    v.push_back("Mila");
    v.push_back("Fahad");
    v.push_back("Arafat");
    v.push_back("Mredula");
    v.push_back("Oishe");
    v.push_back("nora");
    v.push_back("mim");
    v.push_back("Poly");
    v.push_back("Any");
    v.push_back("Sadia");
    v.push_back("Rabeya");
    v.push_back("Toua");
    v.push_back("Jabin");

    sort(v.begin() , v.end());

    int sz = unique(v.begin() , v.end()) - v.begin();

    cout<<sz<<endl;

    for(int i=0; i<sz; i++){
        cout<< v[i] <<endl;
    }

    cout<<endl;

    return 0;
}