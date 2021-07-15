#include<iostream>
using namespace std;

int gcd(int a,int b);
char isprime(int a);

int main(){
	int n;
	
	while(cin>>n){
		int a[n+1][3];
		for (int i=1;i<n+1;i++){
			cin>>a[i][1]>>a[i][2];
			
		}
		for (int i=1;i<n+1;i++){
			int b=a[i][1];
			int u=0;
			for (int j=2 ; j<=b ; j++){	
			    			
				if (isprime(j)=='Y'&&(b%j==0)){
					u++;
					
					int k=0;					
				    while(b%j==0){
					    b/=j;
					    k++;
				    }
				    if ((k==1)&&(u==1))
				        cout<<j;
				    else if ((k!=1)&&(u==1))
				        cout<<j<<"^"<<k;
				    else if ((k==1)&&(u!=1))
				        cout<<"*"<<j;
				    else   
					    cout<<"*"<<j<<"^"<<k;
				}
			}
			cout<<" , "<<gcd(a[i][1],a[i][2])<<" , "<<isprime(gcd(a[i][1],a[i][2]))<<"\n";
		}
	}
}

int gcd(int a,int b){
	int r=1;
	while(r!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

char isprime(int a){
	if (a==1) 
	    return 'N';
	else if (a==2) 
	    return 'Y';
	else
	    for (int i = 2;i<a;i++){
		    if(a%i==0) 
			    return 'N';
	    }
	    return 'Y';
}
