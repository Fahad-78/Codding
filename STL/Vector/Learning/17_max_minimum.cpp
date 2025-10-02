#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2, 3, 5, 5, 7, 7, 1};

    vector<int>::iterator it = max_element( v.begin() , v.end() ); //To find maximum element from the whole vector
    cout<< *it <<endl;

    vector<int>::iterator its = max_element( v.begin()+1 , v.begin()+4 ); //To find the maximum element from a specific range of the vector
    cout<< *its <<endl;

    int n = max_element( v.begin() , v.end() ) - v.begin(); //To find the index of maximum element
    cout<< n <<endl;

    vector<int>::iterator itr = min_element( v.begin() , v.end() ); //To find the minimum element from the whole vector
    cout<< *itr <<endl;

    vector<int>::iterator ity = min_element( v.begin()+1 , v.begin()+4 ); //To find the minimum element from a specific range of the vector
    cout<< *ity <<endl;

    int m = min_element( v.begin() , v.end() ) - v.begin(); //To find the index of the minimum element
    cout<< m <<endl;


    return 0;
}