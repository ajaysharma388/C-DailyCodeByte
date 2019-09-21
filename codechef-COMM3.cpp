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
    int t,n,xc,yc,xa,ya,xb,yb;
    cin >> t;
    while(t--){
    	cin >> n >> xc >> yc >> xa >> ya >> xb >> yb;
    	int d1,d2,d3;
    	d1=sqrt((xc-xa)*(xc-xa)+(yc-ya)*(yc-ya));
    	d2=sqrt((xc-xb)*(xc-xb)+(yc-yb)*(yc-yb));
    	d3=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    	cout<<d1<<" "<<d2<<" "<<d3<<endl;
    	if(d1<=n && d2)
    }	
	return 0;
}