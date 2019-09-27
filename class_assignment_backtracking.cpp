#include<bits/stdc++.h>
using namespace std;

int count_Binary(int n){
    int a[n+1],b[n+1];
    a[0]=0,a[1]=1;
    b[0]=0,b[1]=1;
    for(int i=2;i<=n;i++){
        a[i]=a[i-1]+b[i-1];
        b[i]=a[i-1];
    }
    return a[n]+b[n];
}

int main() {
    #ifndef ONLINE_JUGDE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<count_Binary(n)<<endl;
    }
	return 0;
}