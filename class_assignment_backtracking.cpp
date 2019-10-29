#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define MAX 200

int n_digit(int n)
{
    int a[n],b[n];
    a[0]=1,b[0]=1;
    for(int i=1;i<n;i++)
    {
        a[i]=a[i-1]+b[i-1];
        b[i]=a[i-1];
    }
    return a[n-1]+b[n-1];

}

int main()
{
    #ifndef ONLINE_JUGDE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        cout<<"#"<<i+1<<" : "<<n_digit(n)<<"\n";
    }
}