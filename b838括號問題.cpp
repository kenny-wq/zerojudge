#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main(){
	int n;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		stack <char> a;
		string s;
		cin>>s;
		int answer=0;
		a.push(s[0]);
		for (int i = 1; i < s.size(); ++i)
		{
			if(!a.empty()&&a.top()=='('&&s[i]==')'){
				a.pop();
				answer++;
			}
			else
			    a.push(s[i]);
		}
	    if(a.empty())
	    	cout<<answer<<"\n";
	    else
	    	cout<<0<<"\n";
		
	}
	return 0;
}