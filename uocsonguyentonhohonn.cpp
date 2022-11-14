#include<iostream>
#include<cmath>

bool snt(int a){
	if(a < 2) return false;
	else {
		for( int i = 2; i <= sqrt(a); i++){
			if(a % i == 0) return false;
		}
	}
	return true;
}

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int j = 0 ; j < n; j++){
		long long a;
		cin >> a;
		for(int i = 2; i <= a; i++){
			if(snt(i))cout << i << " ";
		}
		//if(snt(a) == 1) cout << a << " ";
		cout << endl;
	}
	return 0;
}