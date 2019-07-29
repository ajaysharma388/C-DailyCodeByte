// Name : Ajay Sharma
// Email : ajaysm2201@gmail.com	
// UserName : ajaysharma388
// githubUrl : github.com/ajaysharma388

#include <iostream>
using namespace std;
#define ll long long int 

int binary_search(ll *a,int n,ll item){
	int s=0,e=n-1;
	int mid;
	while(s<=e){
		mid=(s+e)/2;
		if(a[mid]==item){
			return mid;
		}else if(a[mid]<item){
			s=mid+1;
		}else{
			e=mid-1;
		}
	}
	return -1;	
}

int main(){
	int n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;++i) cin>>a[i];
	ll item;
	cin>>item;
	cout<<binary_search(a,n,item)<<"\n";
	return 0;
}