#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

void find_subsets(int n,int *a,int sum,int i,int &count){
	cout<<count<<endl;
	if(i==n){
		if(sum==0) count++;
		return;
	}
	find_subsets(n,a,sum,i+1,count);
	find_subsets(n,a,sum+a[i],i+1,count);
}

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	int testCases;
	cin >> testCases;
	while(testCases--){
		int n,count=0;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;++i) cin >> arr[i];
		find_subsets(n,arr,0,0,count);
		cout<<count<<endl;
	}	
	return 0;
}