//Size increase without adding zero like an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(10); //Declaring vector and size in the same time

    int n;
    cin>>n; //Declaring new size

    for(int i=0; i<n; i++){
        cin>> v[i];
    }

    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    cout<<v.size()<<endl;
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}