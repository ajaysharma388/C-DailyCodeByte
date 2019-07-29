#include <iostream>
using namespace std;

int main(){
    int n,m=0,j=0;
    cin>>n;
    int a[100000]={0};
    for(int i=0;i<n;++i){
        cin>>j;
        a[j-1]++;
        m=max(m,j);
    }
    for(int i=0;i<m;++i){
        while(a[i]>0){
            cout<<i+1<<" ";
            a[i]--;
        }
    }
    return 0;
}