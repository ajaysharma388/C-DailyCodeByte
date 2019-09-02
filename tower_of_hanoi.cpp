#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

void solve_tower(int n,char src,char des,char via){
	if(n==0) return;
	solve_tower(n-1,src,via,des);
	cout<<"Moving ring "<<n<<" from "<<src<<" to "<<des<<endl;
	solve_tower(n-1,via,des,src);
}

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	int n;
	cin>>n;
	solve_tower(n,'A','B','C');
	return 0;
}