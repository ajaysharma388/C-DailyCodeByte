#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

void printAllSubseq(int n,char *map,char *res,int i){
}

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
	int num;
	cin >> num;
	char mapping[] = {
						'A','B','C','D','E',
						'F','G','H','I','J',
						'K','L','M','N','O',
						'P','Q','R','S','T',
						'U','V','W','X','Y','Z'
					 },res[100];
	printAllSubseq(num,mapping,res,0);				 
	return 0;
}