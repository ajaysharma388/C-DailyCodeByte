#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    bool flag=false;
    for(int i=0;i<=n/2;++i)
        if(arr[i]!=arr[n-i-1]){
            flag = true;
            break;
        }
    if(flag){
        cout<<"false"<<endl;
    }else{
        cout<<"true"<<endl;
    }
    return 0;
}