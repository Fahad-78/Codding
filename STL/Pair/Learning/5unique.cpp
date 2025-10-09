#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
    optimize();

    vector< pair< string, int>> v;

    int n;
    cin>> n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int i=0; i<n; i++){
        string s;
        getline(cin , s);

        size_t last_space_pos = s.find_last_of(' ');

        string name = s.substr(0, last_space_pos);

        int a = stoi(s.substr(last_space_pos + 1));

        
        v.push_back({name , a});
    }

    sort(v.begin(), v.end());
    //int sz = unique(v.begin() , v.end())-v.begin();
    v.erase(unique(v.begin() , v.end()) , v.end());

    cout<< "Size of unique: "<< v.size() << endl;

    for(auto u:v){
        cout<< u.first << " " << u.second << endl;
    }
    cout<<endl;
}