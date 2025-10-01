#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    if (n <= 1) {
        cout << "True" << endl;
        return 0;
    }

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>> v[i];
    }

    sort(v.begin() , v.end() );

    int dif = *(v.begin()+1) - *v.begin();

    for(int i=2; i<n; i++){
        if((*(v.begin()+i) - *(v.begin()+(i-1))) != dif){
            cout<<"False"<<endl;
            return 0;
        }
    }
    cout<<"True"<<endl;
    return 0;
}