#include <iostream>
#include <algorithm>
using namespace std;

void transpose(int a[][100],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            swap(a[i][j],a[j][i]);
        }
    }
    return;
}
void rotate(int a[][100],int row,int col){
    for(int j=0;j<col;j++){
        for(int i=0;i<row/2;i++){
            swap(a[i][j],a[row-i-1][j]);
        }
    }
    return;
}
int main(){
    int arr[100][100];
    int n;cin>>n;
    int row = n,col = n;
    for(int i=0;i<row;++i){
        for(int j=0;j<col;++j){
            cin>>arr[i][j];
        }
    }
    transpose(arr,row,col);
    rotate(arr,row,col);
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}