// A. Presents (Problem 136A)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> givers(n);
    vector<int> receivers(n);

    for(int i=0; i<n; i++){
        cin>> givers[i];
    }

    for(int i=0; i<n; i++){
        int who_gave = i+1;
        int who_receive = givers[i];
        receivers[who_receive - 1] = who_gave;
    }

    for(int i=0; i<n; i++){
        cout<< receivers[i] <<" ";
    }
    cout<<endl;
}