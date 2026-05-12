#include<iostream>
#include<vector>
using namespace std;    
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> RunningSum;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=1;i<n;i++){
        v[i] += v[i-1];
        RunningSum.push_back(v[i]);
    }
    for(int i=0;i<RunningSum.size();i++){
        cout<<RunningSum[i]<<" ";
    }
    return 0;
}