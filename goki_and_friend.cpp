#include <iostream>

using namespace std;

int main(){
	int n,s,temp;
	cin>>n>>s;
	for(int i=0;i<n;++i){
		cin>>temp;
		if(temp>=s) cout<<"YES\n";
		else cout<<"NO\n";
	}	
	return 0;
}