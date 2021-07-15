#include <iostream>
using namespace std;
int table[400];
bool is_square_number(int a)
{
	for (int i = 0; i < 400; ++i)
	{
		if(table[i]==a)
			return true;
	}
	return false;
}

int main(){
	for (int i = 0; i < 400; ++i)
	{
		table[i]=i*i;
	}
	int a,b;
	while(cin>>a>>b&&a!=0){
		int answer=0;
		for(int i=a;i<=b;i++){
			if(is_square_number(i)){
				answer++;
			}
		}
		cout<<answer<<"\n";
	}
}