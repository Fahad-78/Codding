#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    If we do sort in array
    int a[] = {2, 3, 4, 5};
    sort(a+0, a+4); -->a+0 = begin a+4 = end
    */

    vector<int> v = {5, 3, 1, 2};
    sort( v.begin(), v.end() ); // O(nlog2(n))

    for(auto u:v){
        cout<< u <<" ";
    }
    cout<<endl;

    vector<int> vb = {5, 3, 4, 1, 7, 1, 2};

    sort( vb.begin()+1 , vb.begin()+5);

    for(auto ub:vb){
        cout<<ub<<" ";
    }
    cout<<endl;

    vector<int> vbn = {5, 3, 6, 8 , 2, 3, 5, 7, 4, 1, 6};

    sort(vbn.begin() , vbn.begin()+4);
    sort( vbn.begin()+7 , vbn.end());

    for(auto ubn:vbn){
        cout<<ubn<<" ";
    }
    cout<<endl;
    

}