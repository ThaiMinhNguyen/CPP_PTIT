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
	int a, b;
	cin >> a >> b;
	if(a > b) swap(a, b);
	for(int i = a; i <= b; i++){
		if(snt(i) == 1) cout << i << " ";
	}
}