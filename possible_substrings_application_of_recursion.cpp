#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"



int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	char ques[100],ans[100];
	cin>>ques;
	int l=strlen(ques);
	cout<<pow(2,l)<<endl;
	findSubStrings(ques,ans);
	return 0;
}