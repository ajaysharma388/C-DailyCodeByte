#include <iostream>
using namespace std;
int main(){
	char s[9];
	cin>>s;
	if('A'==s[2] || 'E'==s[2] || 'I'==s[2]
	 || 'O'==s[2] || 'U'==s[2] || 'Y'==s[2]){
		cout<<"invalid\n";
	}else{
		if((s[0]+s[1]-2*48)&1 || (s[3]+s[4]-2*48)&1 || 
		(s[4]+s[5]-2*48)&1 || (s[7]+s[8]-2*48)&1)cout<<"invalid\n";
			else cout<<"valid\n";
	}
	return 0;
}