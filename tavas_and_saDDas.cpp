#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define r(n) scanf("%d",&n)
#define w(n) printf("%d ",n)
#define rep(i,n) for(int i=0;i<n;++i)
#define s string

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
	char n[20];
	cin>>n;
	int l=strlen(n);
	ll ans = (1<<l)-2;
	for(int i=l-1,pos=0;i>=0;--i,pos++){
		if(n[i]=='7'){
			ans+=(1<<pos);
		}
	}
	cout<<ans+1<<endl;
	return 0;
}