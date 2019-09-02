#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

void printAllSubseq(int n,char *map,char *res,int i){
	if(n<10){
		if(n==0) i--;
		else res[i]=map[n-1];
		for(int k=i;k>=0;k--){
			cout << res[k];
		}
		cout << endl;
		return;		
	}
	if(n%100>26){
		res[i] = map[n%10-1];
		printAllSubseq(n/10,map,res,i+1);
	}else{
		res[i] = map[n%10-1];
		printAllSubseq(n/10,map,res,i+1);
		res[i] = map[n%100-1];
		printAllSubseq(n/100,map,res,i+1);
	} 
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