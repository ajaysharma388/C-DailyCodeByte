#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define r(n) scanf("%d",&n)
#define w(n) printf("%d ",n)
#define rep(i,n) for(int i=0;i<n;++i)
#define s string


int BinarySearch(int *a,int n,int key){
	int s=0,e=n-1;
	while(s<=e){
		int m=(s+e)/2;
		cout<<a[m]<<endl;
		if(a[m]==key){
			return m;
		}else if(a[s]<a[m] && key<a[m] && key>=a[s]){
			e=m-1;
		}else if(a[s]>a[m] && key>=a[s]){
			e=m-1;
		}else if(a[m+1]<a[e] && key<=a[e] && key>=a[m]){
			s=m+1;
		}else{
			s=e-1;
		}
	}
	return -1;
}

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	int n;
	r(n);
	int a[n]={};
	rep(i,n) r(a[i]);
	int key; r(key);
	w(BinarySearch(a,n,key));
	return 0;
}