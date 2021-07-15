#include <iostream>
#include <math.h>
#include <stack>
using namespace std;

int main(){
	int n;
	while(cin>>n && n!=0){
        int temp=n;
        stack <int> a;
        while(temp>0){
        	a.push(temp%2);
        	temp/=2;
        }
        cout<<"The parity of ";
        int parity=0;
        while(!a.empty()){
        	cout<<a.top();
        	parity+=a.top();
        	a.pop();
        }
        cout<<" is ";
        cout<<parity<<" (mod 2).\n";

	}
}