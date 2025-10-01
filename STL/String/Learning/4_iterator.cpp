#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Md.Fahad Sarker";
    string::iterator it;

    //Printing the string using iterator
    for(it=s.begin(); it != s.end(); it++){
        cout<< *it;
    }
    cout<<endl;

    return 0;
}