#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		
		for (int i=0;i<(n-1);i++){
			int min=i;
			for (int j=i+1;j<n;j++){
				if(a[min]>a[j])
				    min=j;
			}
			swap(a[i],a[min]);
		}
		for (int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
