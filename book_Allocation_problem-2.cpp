#include <iostream>
using namespace std;

#define endl "\n"

bool isPossible(int *a,int n,int s,int page){
	int student=1,i=0,sum=0;
	while(student<=s && i<n){
		if(sum+a[i]<=page){
			sum+=a[i];
			i++;
		}else{
			student++;
			if(s<student) return false; 
			sum=0;
		}
	}
	return true;
}

int main(){
	int testCases,books[100]={0};
	cin>>testCases;
	while(testCases--){
		int n,s,l=0,r=0,page=0;
		cin>>n>>s;
		for(int i=0;i<n;++i){
			cin>>books[i];
			r+=books[i];
		}
		while(l<=r){
			int m=(l+r)/2;
			//cout<<m<<endl;
			if(isPossible(books,n,s,m)){
				page=m;
				r=m-1;
			}else{
				l=m+1;		
			}
		}
		cout<<page<<endl;
	}
	return 0;
}
