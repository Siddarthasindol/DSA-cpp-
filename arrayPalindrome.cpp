#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> rev_v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        rev_v[i] = v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    reverse(rev_v.begin(),rev_v.end());
    cout<<"\nReversed vector: ";
    for(int i=0;i<rev_v.size();i++){
        cout<<rev_v[i]<<" ";
    }
    if(v == rev_v){
        cout<<"\nThe vector is a palindrome."<<endl;
    }
    else{
        cout<<"\nThe vector is not a palindrome."<<endl;
    }
    return 0;

}

//using two pointer approach
