//rightshift
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int shift;
    cout<<"Enter the number of positions to right shift: ";
    cin>>shift;
    shift = shift % n;
    if(n == 0) return 0; // To handle cases where shift is greater than n
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + shift);
    reverse(v.begin() + n - shift, v.end());
    cout<<"The vector after right shift is: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
