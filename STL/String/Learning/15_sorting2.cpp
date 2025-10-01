//Luxiography smallest to largest
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
    v.push_back("mila");
    v.push_back("nora");
    v.push_back("Mim");

    sort(v.begin() , v.end());

    for(auto u:v){
        cout<< u <<endl;
    }
    cout<<endl;


    return 0;
}