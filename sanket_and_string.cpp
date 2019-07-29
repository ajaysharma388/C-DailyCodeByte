#include<iostream>
#include <string.h>
using namespace std;

int checkMax(char *A,int n,int l,int r,int k){
	while(k && r<n){
		if(A[l]==A[r]){
			r++;
		}else{
			k--;
			r++;
		}
	}
	if(A[l]==A[r])
		return r-l+1;
	else
		return r-l;
}
int answer(string &s,int n,int k){
	int m=0;
	char A[n+1];
	strcpy(A, s.c_str()); 
	int l=0,r=l+1;
	for(int i=0;i<n-1;++i){
		m=max(m,checkMax(A,n,i,i+1,k));
	}
	return m;
}
int main(){
	string s;
	int k;
	cin>>k>>s;
	int n=s.length();
	cout<<answer(s,n,k);
}