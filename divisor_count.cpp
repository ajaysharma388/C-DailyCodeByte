#include <iostream>

using namespace std;

int main(){
	int l,r,k,c=0;	
	cin>>l>>r>>k;
	for(int i=l;i<=r;++k){
		if(i%k==0)c++;
	}
	cout<<c<<endl;
	return 0;
}