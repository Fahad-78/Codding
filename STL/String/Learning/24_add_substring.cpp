#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    string s = "Fahad";
    string d = "is a Sarker good boy";

    copy(d.begin()+4 , d.begin()+12, back_inserter(s));
    cout<< s <<endl;

    copy(d.begin() , d.begin()+4 , back_inserter(s));
    cout<< s <<endl;

    copy(d.begin()+ 11, d.end() , back_inserter(s));
    cout<< s <<endl;



    return 0;
}