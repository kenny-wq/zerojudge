#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <int> plant;
	int high,c,answer=0;
	while(cin>>high){
		plant.push_back(high);
	}
	c = plant.back();
	plant.pop_back();
	
	for (int i = 0; i < plant.size()-1; ++i)
	{
 		if(plant[i]-plant[i+1]>c){
            answer+=plant[i]-plant[i+1]-c;
			plant[i+1]=plant[i]-c;
		}
	}
	for(int i=plant.size()-1;i>=1;i--){
		if(plant[i]-plant[i-1]>c){
			answer+=plant[i]-plant[i-1]-c;
			plant[i-1]=plant[i]-c;
		}
	}
	cout<<answer;
}