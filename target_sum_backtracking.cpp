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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;++i){
    	cin >> arr[i];
    }
    cin >> t;
    for(int i=0;i<n;++i){
    	cout << arr[i] <<" ";
    }
    delete []arr; 
	return 0;
}