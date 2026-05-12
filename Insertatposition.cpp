#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int> v;
    cout<<"Enter the number of elements in the vector: ";
    cin>>n;
    cout<<"Enter the elements of the vector: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"The vector is: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
   
   int del_pos;
    cout<<"\nEnter the position to delete: ";
    cin>>del_pos;
    v.erase(v.begin()+del_pos);
    cout<<"The vector after deletion is: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    int search_element;
    cout<<"\nEnter the element to search: ";
    cin>>search_element;
    bool found = false;
    for(int i=0;i<v.size();i++){
        if(v[i]==search_element){
            found = true;
            break;
        }
    }
    if(found){
        cout<<"Element found in the vector."<<endl;
    }
    else{
        cout<<"Element not found in the vector."<<endl;
    }\
    return 0;
}   
