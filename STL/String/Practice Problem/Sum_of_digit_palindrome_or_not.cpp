#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
    optimize();

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int temp = 0;

        while(n != 0){
            int r = n%10;
            temp = temp + r;
            n = n/10;
        }

        string s = to_string(temp);
        string sd = s;
        reverse(sd.begin(), sd.end());

        if(s==sd){
            cout<< "YES" <<endl;
        }

        else{
            cout<< "NO" <<endl;
        }    
    }

    return 0;
}