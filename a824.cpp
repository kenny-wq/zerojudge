#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	int sum=0;
	while(cin>>a>>b>>c){
		for(int i=1;i<=c;i++){
			if(i%a==0 || i%b==0){
				sum+=i;
			}
		}
	}
	char s;
	s='A'+sum%26-1;
	cout<<s;
}