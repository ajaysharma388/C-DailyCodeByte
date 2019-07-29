#include <iostream>
#define endl "\n"
using namespace std;

int main(){
	int r,c,k,s;
	cin>>r>>c>>k>>s;
	char A[r][c];
	for(int i=0;i<r;++i){
		for(int j=0;j<c;++j){
			cin>>A[i][j];
		}
	}
	for(int i=0;i<r;++i){
		for(int j=0;j<c;++j){
			if(s>=0){
				if(A[i][j]=='#') break;
				if(A[i][j]=='*') s+=5;
				if(A[i][j]=='.') s-=2;
				if(j<c-1) s--;
			}
		}
	}
	if(s>=k)cout<<"Yes\n"<<s<<endl;
	else cout<<"No\n";
	return 0;
}