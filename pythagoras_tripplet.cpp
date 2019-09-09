#include<bits/stdc++.h>

#define ll long long
using namespace std;

void pythagoras(ll n){
    ll a,b,c;
    if(n==1 || n==2)
    cout<<"-1";
    else{
        if(n%2!=0)
        {
            ll p=((n+1)/2);
            ll q=((n-1)/2);
            a= (p+q)*(p-q);
            b= 2*p*q;
            c= ((p*p) + (q*q));
            if((c*c)==(a*a)+(b*b))
            {
                cout<<b<<" "<<c;
            }
            else
            {
                cout<<-1;
            }
        }
        else
        {
            ll p=n/2;
            ll q=1;
            a= (p+q)*(p-q);
            b= 2*p*q;
            c= ((p*p) + (q*q));
            if((c*c)==(a*a)+(b*b))
            {
                cout<<b<<" "<<c;
            }
            else
            {
                cout<<-1;
            }
        }
    }
}
int main(){
    #ifndef ONLINE_JUGDE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif  
    ll n;
    cin>>n;
    pythagoras(n);
    return 0;
}