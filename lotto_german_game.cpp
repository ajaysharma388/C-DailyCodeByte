#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int x=1;x<n-4;++x)
    for(int y=x+1;y<n-3;++y)
    for(int z=y+1;z<n-2;++z)
    for(int m=z+1;m<n-1;++m)
    for(int o=m+1;o<n;++o)
    for(int p=o+1;p<=n;++p)
    cout<<"{"<<x<<","<<y<<","<<z<<","<<m<<","<<o<<","<<p<<"}\n";
    return 0;
}
