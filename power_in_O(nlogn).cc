#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

ll power(ll x,ll n) {
	if(x == 1 or x == 0) {
		return x;
	}
	if(n == 0 or n == 1) {
		return x*n;
	}
	ll halfPow = power(x,n/2);
	if(n&1) {
		return halfPow*halfPow*x;
	}
	return halfPow*halfPow; 
}

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll x,n;
	cin >> x >> n;
	cout << power(x,n) << endl;
	return 0;
}