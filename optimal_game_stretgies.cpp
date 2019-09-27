#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

int findMax(int *a,int i,int n){
	int user=0,opp=0;
	user+=a[i];
	opp+=a[i+1];
	findMax(a+)


	return user;
}

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >> n;
	int *a = new int[n];
	for(int i=0;i<n;++i){
		cin >> a[i];
	}
	cout << findMax(a,n) << endl;
	return 0;
}