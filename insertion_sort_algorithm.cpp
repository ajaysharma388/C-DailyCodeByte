#include <iostream>
using namespace std;

#define ll long long
int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;++i){
        cin>>a[i];
    }
    for(int j=1;j<n;j++){
        int i=j;
        int temp=a[j];
        while(i>0 && a[i-1]>temp){
            a[i]=a[i-1];
            i--;
        }
        a[i]=temp;
    }
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}