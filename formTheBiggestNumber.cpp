#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool findRank(string a,string b){
    string ab = a.append(b);
    string ba = b.append(a);
    return ab.compare(ba)>0?1:0;
}

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n;
        cin>>n;
        vector<string> v;
        for(int i=0;i<n;++i){
            string temp;
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end(), findRank); 
        for (int i=0; i < v.size() ; i++ ) 
            cout << v[i]; 
        cout<<endl;
    }
    return 0;
}