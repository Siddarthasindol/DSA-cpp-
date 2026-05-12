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
    int left = 0;
    int right = n-1;
    bool is_palindrome = true;
    while(left < right){
        if(v[left] != v[right]){
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }
    if(is_palindrome){
        cout<<"The vector is a palindrome."<<endl;
    }
    else{
        cout<<"The vector is not a palindrome."<<endl;
    }
    return 0;

}
