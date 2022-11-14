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

bool uocso(int n){
	int count = 0;
	for(int i = 1; i <= n; i++){
		if(n%i==0) count ++;
		if(count == 4) return false;
	}
	if(count == 3) return true;
	else return false;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		for(int i = 1;i <= sqrt(a) ; i++){
			if(snt(i) == 1) cout << i*i << " ";
		}
		cout << endl;
	}
}