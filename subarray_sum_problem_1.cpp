#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

ll a[1000005],prefixsum[1000005];

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	ll sum = 0;
    	memset(prefixsum,0,sizeof prefixsum);
    	prefixsum[0]=1;
    	for(int i=0;i<n;++i){
    		cin >> a[i];
    		sum += a[i];
    		sum %= n;
    		sum = (sum+n)%n;
    		prefixsum[sum]++;
    	}
    	ll ans=0;
    	for(int i=0;i<n;++i){
    		ll no = prefixsum[i];
    		ans += (no*(no-1))/2;
    	}
    	cout<<ans<<endl;
    }
	return 0;
}