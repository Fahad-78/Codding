#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string s1 = "Fahad", s2 = "Sarker";

    s = s1 + ' ' + s2;
    cout<< s <<endl;

    s1.clear();
    cout<< s1 <<endl;
    cout<< s1.empty() <<endl;

    s1 = s2;
    cout<< s1 <<endl;

    cout<< s1.empty() <<endl;

    return 0;
}