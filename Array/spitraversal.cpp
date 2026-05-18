//spiral traversal of a 2d matrix
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> a={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int r=a.size();
    int c=a[0].size();
    int top=0;
    int bottom=r-1;
    int left=0;
    int right=c-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<a[top][i]<<" ";

        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<a[i][right]<<" ";

        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<a[bottom][i]<<" ";
            }
        }
        bottom--;
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<a[i][left]<<" ";

            }
            left++;
        }
    }
    return 0;
}