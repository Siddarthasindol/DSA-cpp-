#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,largeest,second_largeest;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        laregest=max(largest,v[i]);
        if(v[i]!=largest){
            second_largest=max(second_largest,v[i]);
        }
    }
    cout<<second_largest<<endl;
    return 0;
}