//A. Way Too Long Words (Problem 71A)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        string w;
        cin>>w;

        if( w.length()>10 ){
            char first = w[0];
            char second = w[w.length()-1];
            int size = w.length()-2;

            cout<<first<<size<<second<<endl;
        }
        else{
            cout<<w<<endl;
        }
    }
}