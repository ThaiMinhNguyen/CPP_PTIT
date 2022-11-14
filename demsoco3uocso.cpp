#include<iostream>
#include<cmath>

using namespace std;
bool snt(int a){
	if(a < 2) return false;
	else {
		for( int i = 2; i <= sqrt(a); i++){
			if(a % i == 0) return false;
		}
	}
	return true;
}


int main(){
	int n;
	cin >> n;
	while(n--){
		long long a, b;
		cin >> a >> b;
		int count = 0;
		for(int i = a;i <= sqrt(b) ; i++){
			if(snt(i) == 1) count++;
		}
		cout << count <<  endl;
	}
}