#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v.push_back(v[i]);

    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    sort(v.begin(),v.end());
    cout<<"\nSorted vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;

}