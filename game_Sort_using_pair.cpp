#include <iostream>
#include <algorithm>
using namespace std;
#define p pair<string ,int>

bool compare(p e1,p e2){
    if(e1.second==e2.second){
        return e1.first<e2.first;
    }
    return e1.second>e2.second;
}
int main(){
    int max,n;
    cin>>max>>n;
    p a[n];
    for(int i=0;i<n;++i){
        int sal; string name;
        cin>>name>>sal;
        a[i].first=name;
        a[i].second=sal;
    }
    sort(a,a+n,compare);
    for(int i=0;i<n;++i)
        if(a[i].second>=max)
            cout<<a[i].first<<" "<<a[i].second<<endl;
    return 0;
}