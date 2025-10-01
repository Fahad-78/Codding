#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);

    //For getting the size of the vector
    cout<<endl<< "Size of the vector is: "<< v.size() <<endl<<endl;

    //Printing all the value of the vector using for loop
    cout<<"Values are: ";
    for(int i=0; i<v.size(); i++){
        cout<< v[i] << " ";
    }

    cout<< endl<<endl;
    return 0;
}