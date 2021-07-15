#include<iostream>
using namespace std;

int main()
{
    int K='J'-'C';
    char string[1000];
    cin>>string;
    for(int i=0;string[i]!='\0';i++){
    	cout<<(char)(string[i]-K);
	}
    return 0;
}
