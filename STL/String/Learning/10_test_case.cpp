//PROBLEM -> Don't understand the code
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){

    optimize();

    string ts;
    getline(cin, ts);// Read the number of test cases as a line
    int t = stoi(ts); //string to integer
    
    for(int i=1; i<=t; i++){
        string s;
        getline(cin, s);

        cout<< "Case "<<i<<": "<<s<<endl;
    }
        
    return 0;
}