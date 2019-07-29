#include <iostream>

using namespace std;
int add(){
	int a,b;
	cin>>a>>b;
	return a+b;
}
int subtract(){
	int a,b;
	cin>>a>>b;
	return a-b;
}

int divide(){
	int a,b;
	cin>>a>>b;
	return a/b;
}

int mod(){
	int a,b;
	cin>>a>>b;
	return a%b;
}

int mul(){
	int a,b;
	cin>>a>>b;
	return a*b;
}

int main(){
	char ch;
	bool flag = true;
	cin>>ch;
	while(flag){
		if(ch=='+')
			cout<<add()<<endl;
		else if(ch=='-') 
			cout<<subtract()<<endl;
		else if(ch=='%') 
			cout<<mod()<<endl;
		else if(ch=='*')
			cout<<mul()<<endl;
		else if(ch=='/')
			cout<<divide()<<endl;
		else if(ch=='x' || ch=='X')
			flag = false;
		else
			cout<<"Invalid operation. Try again."<<endl;
		cin>>ch;
	}
	return 0;
}