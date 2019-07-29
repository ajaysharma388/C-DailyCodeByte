#include <iostream>
using namespace std;

int main(){
	char A[10],B[5];
	int t=2;
	while(t--){
		cin>>A;
		cin>>B;
		for(int i=0;i<10-4;++i){
			if(A[i]==B[0]){
				int k=i+1;
				int j=1;
				while(A[k]==B[j] && k<10 && j<5){
					k++;j++;
				}
				if(j==5){
					cout<<"1"<<endl;
					break;
				}else{
					cout<<"0"<<endl;
					break;
				}
			}
		}
	}
	return 0;
}