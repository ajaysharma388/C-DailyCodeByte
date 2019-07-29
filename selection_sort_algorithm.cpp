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
    for(int i=0;i<n-1;++i){
        int min=i;
        for(int j=i+1;j<n;++j){
            if(a[min]>a[j])
                min=j;
        }
        swap(a[i],a[min]);
    }
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}