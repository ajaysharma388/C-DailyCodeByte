#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define r(n) scanf("%d",&n)
#define w(n) printf("%d ",n)
#define rep(i,n) for(int i=0;i<n;++i)
#define s string
#define p pair<s,int>
#define mp make_pair 
#define map map<s,int>
int main(){
    #ifndef ONLINE_JUGDE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif    
    int n;
    map m;
    map::iterator it;
    r(n);
    while(n--){
        double a,b,c;
        cin>>a>>b>>c;
        ios_base::fmtflags flags = cout.flags();
cout << setw(0) << "0x" << hex << nouppercase << left << (long long)a << endl;
cout.flags(flags);
cout << fixed << setw(15) << setprecision(2) << setfill('_') << right << showpos << b << endl;
cout.flags(flags);
cout << scientific << setw(15) << setprecision(9) << noshowbase << right << c << endl;
cout.flags(flags);
    }
    return 0;
}