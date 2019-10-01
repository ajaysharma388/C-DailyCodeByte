#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
#define endl "\n"

ll arr[1000005];

ll probable_arr(ll n,ll m){
	if(n<m){
		arr[n]=1;
		return arr[n];
	}
	if(n==m){
		arr[n]=2;
		return arr[n];
	}
	if(arr[n-m]==0) arr[n-m]=probable_arr(n-m,m);
	if(arr[n-1]==0) arr[n-1]=probable_arr(n-1,m);
    arr[n]=arr[n-1]+arr[n-m];
	return arr[n]%mod;
}

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
		int n,m;
		cin>>n>>m;
		memset(arr,0,sizeof arr);
		cout<<probable_arr(n,m)<<endl;
	}
	return 0;
}