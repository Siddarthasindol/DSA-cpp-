//col sum in 2d array
#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    int max=0;
    for(int j=0;j<c;j++){
        int sum=0;
        for(int i=0;i<r;i++){
            sum+=a[i][j];
        }
        if(sum>max){
            max=sum;
        }
        cout<<sum<<" ";
    }
    cout<<endl<<"Maximum column sum: "<<max<<endl;
    return 0;
}
