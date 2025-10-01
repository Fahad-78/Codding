#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    string s = "abcd";

    s.pop_back();//Delete the last element
    cout<< s.back(); //Print the last element


    return 0;
}