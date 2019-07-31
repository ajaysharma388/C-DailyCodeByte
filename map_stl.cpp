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
        int q,mark;
        s name;
        cin >> q >> name;
        it = m.find(name);
        if(q==1){
            cin >> mark;
            if(it==m.end()){
                m.insert(mp(name,mark));
            }else{
                it->second+=mark;
            }
        }else if(q==2){
            it->second=0;
        }else{
            cout<<it->second<<endl;
        }
    }
    return 0;
}