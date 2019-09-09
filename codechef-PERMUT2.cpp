#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

bool check(int *a,int n){
	return true;
}

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	int n;
	cin >> n;
	if(n>0){
		int *a = new int[n];
		for(int i=0;i<n;++i){ 
			cin >> a[i];
		}
		(check(a,n))?cout<<"ambiguous\n":"not ambiguous\n";
	}
	return 0;
}