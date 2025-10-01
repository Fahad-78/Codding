#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> v;

    cout<<endl<<"Enter the size of the vector: ";
    cin>> n; //Size of the vector

    cout<<"Enter value: ";
    for(int i=0; i<n; i++){
        int a; //for taking the value
        cin>> a; //taking the value
        v.push_back(a); //push back the value into vector
    }

    cout<<"Size of the vector: "<<v.size()<<endl;

    cout<<"The values you entered: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;
}