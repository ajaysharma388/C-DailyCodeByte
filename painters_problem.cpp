#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

bool isPossible(ll *board,ll n,ll time,ll k){
	ll t=0,painter=1,i=0;
	while(painter<=k && i<n){
		if(t+board[i]<=time){
			t+=board[i];
			i++;
		}else{
			painter++;
			if(painter>k) return false;
			t=0;
		}
	}
	return true;
}

ll paint(ll *board,ll n,ll k){
	ll ans=0,s=board[0],e=0;
    for(ll i=0;i<n;++i){
        e+=board[i];
    }
	while(s<e){
		ll m=(s+e)/2;
		if(isPossible(board,n,m,k)){
			e=m;
			ans=m;
		}else{
			s=m+1;
		}
	}
	return ans;
}

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	ll n,k,t;
	cin >> n >> k >> t;
	ll *board = new long long[n];
	for(ll i=0;i<n;++i){
		cin >> board[i];
		board[i]*=t;
	}
	cout << paint(board,n,k) << endl;
	return 0;
}