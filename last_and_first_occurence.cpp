#include <iostream> 
//#include<bits/stdc++.h>
#define endl "\n"
#define fo(n) for(int i=0; i<n; i++)
using namespace std;

int occurence(int *a,int n,int k,bool first){
	int s=0,e=n-1;
	int f=(first)?n:-1;
	while(e>=s){
		int mid=(s+e)/2;
		if(a[mid]==k){
			if(first){
				f=min(f,mid);
				e=mid-1;
			}else{ 
				f=max(f,mid);
				s=mid+1;
			}
		}else if(a[mid]>k){
			e=mid-1;
		}else{
			s=mid+1;
		}
	}
	if(f<n && f>-1) return f;
	return -1;
}

int main(){
	int n,t,cur_num;
	cin>>n;
	int A[n];
	fo(n) cin>>A[i];
	cin>>t;
	while(t--){
		cin>>cur_num;
		cout<<occurence(A,n,cur_num,true)<<" "<<occurence(A,n,cur_num,false)<<endl;
	}
	return 0;
}