#include<iostream>
#include<cmath>

using namespace std;


int main(){
	int n;
	cin >> n;
	for(int j = 0 ; j < n; j++){
		long long a;
		long long result;
		cin >> a;
		for(int i = 2; i <= sqrt(a); i++){
			while(a%i == 0 && a > 0){
				a=a/i;
				result = i;
			}
		}
		if(a!=1) result = a;
		cout << result << endl;
	}
	
	return 0;
}