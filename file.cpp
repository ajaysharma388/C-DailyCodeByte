#include <iostream>
using namespace std;

#define endl "\n"

int main(){
	int n,m,x,y,max;
	cin>>n>>m>>x>>y;
	int s=0,e=n;
	while(s<=e){
		int m=(s+e)/2;
		int c=x+(n-m)*y;
		if(m<=c){
			max=m;
			s=m+1;
		}else{
			e=m-1;
		}
	}
	cout<<max<<endl;
	return 0;
}
