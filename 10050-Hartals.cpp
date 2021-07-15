#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int k = 0; k < T; k++) {
		int N;
		cin >> N;
		int schedule[N+1] = {0};
		int P;
		cin >> P;

		int day[P];
		for (int i = 0; i < P; i++) {
			cin >> day[i];
		}
		for (int i = 0; i < P; i++) {
			for (int j = 1; j <= N; j++) {
				if (j % day[i]==0) {
					schedule[j] = 1;
				}
			}
		}
		for (int j = 1; j <= N; j++) {
			if ( j % 7==0) {
				schedule[j] = 0;
			}
		}
		for (int j = 6; j <= N; j+=7) {
			schedule[j]=0;
		}
		
		int sum=0;
		for (int j = 1; j <= N; j++) {
			if(schedule[j])
				sum++;
		}
		cout<<sum<<"\n";
		

	}
}