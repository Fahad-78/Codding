#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
    optimize();

    int n;
    cin>> n;

    for(int i=0; i<n; i++){
        string s;
        cin>> s;
        string sd = s;

        reverse(sd.begin(), sd.end());

        if(s==sd){
            cout<< "Yes"<<endl;
        }
        else{
            cout<< "No" <<endl;
        }
    }

    return 0;


}