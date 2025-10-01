#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){

    optimize();

    int t;
    cin>>t;
    cin.ignore(); // IMPORTANT: Consume the newline character left by "cin >> t"

    for(int i=1; i<=t; i++){
        string s;
        getline(cin, s);

        cout<<"case"<< i <<" "<< s <<endl;
    }
        
    return 0;
}