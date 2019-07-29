#include <iostream>
using namespace std;

int main(){
	int sum=0;
	char s[100];
	cin>>s;
	for(int i=0;s[i]!='\0';++i){
		sum+=s[i]-96;
	}
	cout<<sum<<"\n";
	return 0;
}