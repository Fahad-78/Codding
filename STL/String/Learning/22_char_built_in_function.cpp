#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
    optimize();

    char c = 'A';
    bool f1 = isupper(c);//Check is the character is in upper hand or lower hand
    cout<< f1 <<endl;

    bool f2 = islower(c);
    cout<< f2 <<endl;

    char ch = ' ';
    bool f3 = isspace(ch);
    cout<< f3 <<endl;

    char f4 = tolower(c);
    cout<< f4 <<endl;

    char f5 = toupper(f4);
    cout<< f5 <<endl;

    return 0;
}