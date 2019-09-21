#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n;
    cin >> t;
    while(t--){
        cin >> n;
        ll a[n],sum=0,freq[n]={};// always remember if the constraints 
        // for size are available then use global declaretion instead of local. 
        freq[0]=1;
        for(ll i=0;i<n;++i){
            cin >> a[i];
            sum+=a[i];
            sum=(sum+n)%n;
            freq[sum%n]++;
        }
        sum=0;
        for(ll i=0;i<n;++i){ 
            sum+=(freq[i]*(freq[i]-1))/2;
        }
        cout << sum << endl;
    }
	return 0;
}