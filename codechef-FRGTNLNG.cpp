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
    int t,n,q,p;
    cin >> t;
    while(t--){
        cin >> n >> q;
        string *dic = new string[n];
        bool *used = new bool[n];
        for(int i=0;i<n;++i){
            cin >> dic[i];
            used[i]=false;
        }
        sort(dic,dic+n);
        while(q--){
            cin >> p;
            while(p--){
                string temp;
                cin >> temp;
                int s=0,e=n;
                while(s<=e){
                    int m=(s+e)/2;
                    if(dic[m]==temp){
                        used[m]=true;
                    }else if(dic[m]>temp){
                        e=m-1;
                    }else{
                        s=m+1;
                    }
                }
            }
        }
        for(int i=0;i<n;++i){
            if(used[i]){
                cout << dic[i] << " ";
            }
        }
        cout<<endl;
        delete []dic;
        delete []used;
    }
    return 0;
}