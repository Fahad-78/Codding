#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    
    while(1){
        int a;
        cin>> a;
        if(a==0){
            break;
        }
        else{
            v.push_back(a);
        }
    }

    int i = max_element(v.begin(), v.end()) - v.begin();

    cout<< i <<endl;
}