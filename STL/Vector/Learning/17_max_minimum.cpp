#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2, 3, 5, 5, 7, 7, 1};

    vector<int>::iterator it = max_element( v.begin() , v.end() );
    cout<< *it <<endl;

    vector<int>::iterator its = max_element( v.begin()+1 , v.begin()+4 );
    cout<< *its <<endl;

    int n = max_element( v.begin() , v.end() ) - v.begin();
    cout<< n <<endl;

    vector<int>::iterator itr = min_element( v.begin() , v.end() );
    cout<< *itr <<endl;

    vector<int>::iterator ity = min_element( v.begin()+1 , v.begin()+4 );
    cout<< *ity <<endl;

    int m = min_element( v.begin() , v.end() ) - v.begin();
    cout<< m <<endl;
}