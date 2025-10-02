#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string s1 = "Fahad", s2 = "Sarker";

    s = s1 + ' ' + s2;
    cout<< s <<endl;

    s1.clear(); //To clear the string completely
    cout<< s1 <<endl;

    cout<< s1.empty() <<endl; //To check if the s1 is empty or not

    s1 = s2; //Copy all the element from s2 and transfer it to the s1, without empty s2
    cout<< s1 <<endl;
    cout<< s1.empty() <<endl;

    cout<< s2 <<endl;
    cout<< s2.empty() <<endl;

    return 0;
}