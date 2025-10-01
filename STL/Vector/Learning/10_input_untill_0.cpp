#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> v;

    while(1){ //In C++, the number 1 is treated as true, and 0 is treated as false.
        cin>> n;
        if(n == 0){
            break;
        }
        v.push_back(n);
    }

    cout<< v.size() <<endl;
    for(auto u:v){
        cout<< u <<" ";
    }
    cout<<endl;
}