#include<iostream>
using namespace std;

int f91(int a);
int main(){
	int n;
	while(cin>>n&&n!=0){
		cout<<"f91("<<n<<") = "<<f91(n)<<"\n";
	}
}

int f91(int a){
	if (a<=100)
	    return f91(f91(a+11));
	else
	    return a-10;
}
