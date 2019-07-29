#include <iostream>
#define endl "\n"
using namespace std;

bool valid_invalid(int n){
        int prev;
        cin>>prev;
        int cnt = 1;
        bool goingUp = false;
        bool isValid = true;
        while(cnt < n){
            int curr;
            cin>>curr;
            int diff = curr - prev;
             // As the sequence must be strctly decreasing or increasing
            if(diff == 0){  
                isValid = false;
            }else if(diff > 0){  // If Sequence is increasing 
                goingUp = true;
            }else if(goingUp && diff < 0){
              // If Sequence is Decreasing if its already increased once
                isValid = false;
            }
            prev = curr;
            cnt++;
        }
        return isValid;
}

int main(){
    int n;
    cin>>n;
    (valid_invalid(n))?cout<<"true"<<endl:cout<<"false"<<endl;
    return 0;
}