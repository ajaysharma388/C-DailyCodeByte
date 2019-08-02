#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define r(n) scanf("%d",&n)
#define w(n) printf("%d ",n)
#define rep(i,n) for(int i=0;i<n;++i)
#define s string
ll a[1000005],prefixSum[1000005];
int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	int t;
	cin >> t;
	while(t--){
		ll n,sum=0;
		cin>>n;
		memset(prefixSum,0,sizeof(prefixSum));
		for(int i=0;i<n;++i){
			cin >> a[i];
			sum+=a[i];
			//sum%=n;
			sum=(sum+n)%n;
			prefixSum[sum]++;
		}
		sum=0;
		for(int i=0;i<n;++i){
			ll no=prefixSum[i];
			sum+=(no*(no-1))/2;
		}
		cout<<sum<<endl;
	}
	return 0;
}