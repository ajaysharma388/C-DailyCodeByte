#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

bool subsetsum(int* arr,int sum,int i,int n){
	int ans=0;
	if(i==(n-1)){
		ans = sum+arr[i];
		if(ans==0)
			return true;
		else
			return false;
	}
	ans = sum+arr[i];
	if(ans == 0){
		return true;
	}
	return subsetsum(arr,ans,i+1,n)||subsetsum(arr,sum,i+1,n);
	//when subset sum excludes the current element
}

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int *a = new int[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		bool res=subsetsum(a,0,0,n);
		(res)?cout<<"Yes\n":cout<<"No\n";
	}
	return 0;
}