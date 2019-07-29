#include <iostream>
using namespace std;

int main(){
    float n=365,d=365,p=1;
    float per;
    cin>>per;
    // p is the probability 
    //of two people have the different birthday.
    int st=0;
    while(p>per){
        p*=(n/d);
        n--;
        st++;
    }
    cout<<st<<endl;
    return 0;
}