//Check if the string is palindrom or not
#include<bits/stdc++.h>
using namespace std;

//For making fast the cin and cout function
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//endl flash the program so for using \n easily
#define endl '\n'

int main(){

    //optimize()

    string s;
    cout<<"Enter your string: ";
    cin>> s; //But it can't take any space

    string s1 = s;

    reverse(s.begin() , s.end());

    if(s == s1) cout<< "Palindrom"<<endl;
    else cout<< "Not palindrom"<< endl;

    return 0;
}