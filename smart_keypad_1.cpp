#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

void permute(char t[][5],char *n,char *res,int i){
	if(n[0]=='\0'){
		res[i]='\0';
		cout<<res<<endl;
		return;
	}
	for(int k=0;t[n[0]-'0'][k]!='\0';++k){
		res[i]=t[n[0]-'0'][k];
		permute(t,n+1,res,i+1);
	}
}

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
	char res[10],num[10];
	char table[][5] = { " ", ".+@$", "abc",
					   "def", "ghi", "jkl",
					   "mno", "pqrs" , "tuv",
					   "wxyz"};	
	cin >> num;
	permute(table,num,res,0);
	return 0;
}