#include <iostream>
using namespace std;

int main(){
	long long a,b;
	cin>>a>>b;
	long long sum=0;
	for (long long i = a; i <=b ; ++i)
	{
		if(i%2==0){
			sum+=i;
		}
	}
	cout<<sum;
}