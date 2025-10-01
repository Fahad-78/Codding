#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4];// Declaring a Array

    vector<int> v; //Declaring a Vector

    //Assigning value
    v.push_back (2);
    v.push_back (3);
    v.push_back (5);
    v.push_back (6);

    cout<< v[2] <<endl;
    v[2] =  10; //Change value of specific vector
    cout<< v[2] <<endl;

}