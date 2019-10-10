#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

const int D=12; 
ll possiblity = 0;

bool canPlace(char chess[D][D],int i,int j){
	int x,y;
	for(x=0;x<i;++x){
		if(chess[x][j]=='Q') return false;
	}
	x=i-1;
	y=j-1;
	while(x>-1 && y>-1){
		if(chess[x][y]=='Q')
			return false;
		x--;y--;
	}
	x=i-1;
	y=j+1;
	while(x>-1 && y>-1){
		if(chess[x][y]=='Q')
			return false;
		x--;y++;
	}
	return true;
} 

void nQueen(char chess[D][D],int n,int i){
	if(i==n){
		possiblity++;
		//return;	
	} 
	for(int j=0;j<n;++j){
		if(canPlace(chess,i,j)){
			chess[i][j] = 'Q';
		    nQueen(chess,n,i+1);
		    chess[i][j] = '_';
		} 
	}
}

int main(){
	#ifndef ONLINE_JUGDE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char chess[D][D];
    int n;
    cin >> n;
    for(int i=0;i<n;++i){
    	for(int j=0;j<n;++j){
    		chess[i][j]='_';
    	}
    }
    nQueen(chess,n,0);
    cout<<possiblity<<endl;
	return 0;
}