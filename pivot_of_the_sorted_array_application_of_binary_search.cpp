#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

int findPivot(int *a,int s,int e){
	while(s<=e){
		int m=(s+e)/2;
		if(a[m-1]>a[m])	return m-1;
		if(a[m]>a[m+1])	return m;
		if(a[m]<a[e]) e=m;
		else s=m;
	}
}

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	int n;
	cin >> n;
	int a[n]={};
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	cout<<findPivot(a,0,n-1)<<endl;
	return 0;
}