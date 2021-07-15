#include<iostream>
using namespace std;

int f(int n);
int main(){
	int n;
	while(cin>>n){
		cout<<f(n)<<"\n";
	}
}

int f(int n){
	if(n==1){
		return 1;
	}
	if(n==2){
		return 2;
	}
	else{
		return f(n-1)+f(n-2);
	}
}
