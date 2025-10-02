#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2, 3, 4, 5};

    vector<int>::iterator it;
    /*This declares a variable named it.
    Its type is vector<int>::iterator, which means "an iterator that knows how to travel through a vector of integers."*/

    for(it = v.begin(); it != v.end(); it++){
        cout<< *it <<" "; //We are working here with index that why pointer
    }
    cout<<endl;
}