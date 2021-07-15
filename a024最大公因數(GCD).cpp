#include<iostream>
using namespace std;

int main(){
	long long a,b;
	while(cin>>a>>b){
		int r=1;
		while(r!=0){
			r=a%b;
			a=b;
			b=r; 
			
		} 
		cout<<a<<"\n";
	}
}
