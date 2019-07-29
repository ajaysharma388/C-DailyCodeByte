#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define endl "\n"

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vi v(n);
    for(int i=0;i<n;++i)
        cin >> v[i];
    int q;
    cin >> q;
    while(q--){
        int l=0,r=n-1,e,b,i;
        cin >> e;
        bool f=false;
        while(l<=r){
            int m=(l+r)/2;
            if(v[m]==e){
                f=true;
                i=m;
                r=m-1;
            }else if(v[m]>e){
                b=m;
                r=m-1;
            }else{
                l=m+1;
            }
        }
        if(f) cout<<"Yes "<<i+1<<endl;
        else cout<<"No "<<b+1<<endl;
    }
    return 0;
}
